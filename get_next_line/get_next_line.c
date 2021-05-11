/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:13:15 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/09 20:14:05 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_findnextline(t_gnl *info, char **line)
{
	char *tmp;
	char *stack;

	tmp = info->stack;
	stack = info->stack;
	while (*tmp && *tmp != '\n')
		tmp++;
	if (*tmp == '\n')
	{
		*tmp = '\0';
		*line = ft_strdup(str);
		info->stack = ft_strdup(tmp + 1);
		free(stack);
		stack = NULL;
		return (1);
	}
	return (0);
}

int ft_readfile(t_gnl *info, char **line)
{
	char *temp;
	char *stack;
	int ret;

	temp = info->tmp;
	while ((ret = read(info->fd, temp, BUFFER_SIZE)) > 0)
	{
		temp[ret] = '\0';
		if (*(info->stack))
		{
			stack = info->stack;
			info->stack = ft_strjoin(stack, temp);
			free(stack);
			stack = NULL;
		}
		else
			info->stack = ft_strdup(temp);
		if (ft_findnextline(info, line))
			break;
	}
	return (ret > 0 ? 1 : ret);
}

int get_next_line(int fd, char **line)
{
	static t_gnl *files;
	t_gnl *cur;
	int ret;

	cur = files;
	while (cur && cur->fd != fd)
		cur = cur->next;
	if (!line || !(cur = (*t_gnl)malloc(sizeof(t_gnl))) || read(fd, cur->temp, 0) < 0 || cur->tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE))
		return (-1);
	if (cur->stack != NULL && ft_findnextline(cur, line))
		return (1);
	ret = ft_readfile(cur, line);
	free(cur->tmp);
	if (ret == 0 && *line != NULL)
		*line = NULL;
	if (ret == 0 && cur->stack)
	{
		*line = cur->stack;
		cur->stack = NULL;
	}
	return (ret);
}

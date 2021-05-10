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

char *ft_strdup(char *str)
{
	int len;
	char *ret;
	char *tmp;

	len = ft_strlen(str);
	if (!(ret = (char *)malloc(len + 1)))
		return (NULL);
	tmp = ret;
	while (*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (ret);
}

int ft_findnextline(t_gnl *info, char **line)
{
	char *tmp;

	tmp = info->stack;
	while (*tmp && *tmp != '\n')
		tmp++;
	if (*tmp == '\n')
	{
		*tmp = '\0';
		*line = ft_strdup(str);
		info->stack = ft_strdup(tmp + 1);
		free(str);
		return (1);
	}
	return (0);
}

int ft_readfile(t_gnl *info, char **line)
{
}

int get_next_line(int fd, char **line)
{
	static t_gnl *files;
	t_gnl cur;

	cur = files;
	while (cur && cur->fd != fd)
		cur = cur->next;
	if (!line || !(cur = (*t_gnl)malloc(sizeof(t_gnl))) || read(fd, cur->temp, 0) < 0 || cur->tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE))
		return (-1);
	if (cur->stack != NULL && ft_findnextline(cur, line))
		return (1);
	ft_readfile(cur, line);
}

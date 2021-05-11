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

int ft_findnextline(char **stack, char **line)
{
	char *tmp;
	char *tofree;

	tmp = *stack;
	tofree = *stack;
	while (*tmp && *tmp != '\n')
		tmp++;
	if (!*tmp)
		return (0);
	*tmp = '\0';
	*line = ft_strdup(stack);
	*stack = ft_strdup(tmp + 1);
	free(tofree);
	tofree = NULL;
	return (1);
}

int ft_readfile(int fd, char **stack, char *heap, char **line)
{
	int ret;
	char *tmp;

	while ((ret = read(fd, heap, BUFFER_SIZE) > 0)
	{
		heap[ret] = '\0';
		if (*stack)
		{
			tmp = *stack;
			*stack = ft_strjoin(tmp, heap);
			free(tmp);
			tmp = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (ft_findnextline(stack, line))
			break;
	}
	return (RET_VAL(ret));
}

int get_next_line(int fd, char **line)
{
	char *openfiles[MAX_FD];
	char *heap;
	int ret;

	if (!line || fd < 0 || fd >= MAX_FD || BUFFER_SIZE < 1 || !(heap = (char *)malloc(BUFFER_SIZE + 1)))
		return (-1);
	if (openfiles[fd] != NULL)
		if (ft_findnextline(&openfiles[fd], line))
		{
			free(heap);
			return (1);
		}
	ret = ft_readfile(fd, &openfiles[fd], heap, line);
	free(heap);
	if (ret <= 0)
		openfiles[fd] = NULL;
	return (ret);
}
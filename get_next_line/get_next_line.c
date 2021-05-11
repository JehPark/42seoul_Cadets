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
	int idx;

	idx = -1;
	tmp = *stack;
	while (tmp[++idx] != '\n')
		if (!tmp[idx])
			return (-1);
	tmp[idx] = '\0';
	*line = ft_strdup(*stack);
	if (!(ft_strlen(&tmp[idx + 1])))
	{
		free(*stack);
		*stack = NULL;
		return (1);
	}
	tmp = ft_strdup(&tmp[idx + 1]);
	free(*stack);
	*stack = tmp;
	return (1);
}

int ft_exception_line(char **stack, char **line, ssize_t size)
{
	if (size < 0)
		return (-1);
	if (*stack && ft_findnextline(stack, line) > 0)
		return (1);
	else if (*stack)
	{
		*line = *stack;
		*stack = NULL;
		return (0);
	}
	*line = ft_strdup("");
	return (0);
}

int get_next_line(int fd, char **line)
{
	static char *openfiles[MAX_FD + 3];
	char *heap;
	ssize_t size;

	if (!line || fd < 0 || fd >= MAX_FD || BUFFER_SIZE < 1 || !(heap = (char *)malloc(BUFFER_SIZE + 1)))
		return (-1);
	while ((size = read(fd, heap, BUFFER_SIZE)) > 0)
	{
		heap[size] = '\0';
		openfiles[fd] = ft_strjoin(openfiles[fd], heap);
		if ((ft_findnextline(&openfiles[fd], line)) > 0)
		{
			free(heap);
			heap = NULL;
			return (1);
		}
	}
	free(heap);
	heap = NULL;
	return (ft_exception_line(&openfiles[fd], line, size));
}
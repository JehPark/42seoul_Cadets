/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:14:18 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/09 20:16:40 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4096
#endif

#ifndef MAX_FD
#define MAX_FD 4096
#endif

int get_next_line(int fd, char **line);
int ft_findnextline(char **stack, char **line);
int ft_exception_line(char **stack, char **line, ssize_t size);
int ft_strlen(char *str);
char *ft_strdup(char *str);
char *ft_strjoin(char *s1, char *s2);

#endif

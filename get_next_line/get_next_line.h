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

typedef struct s_gnl
{
    int fd;
    char *tmp;
    char *stack;
    struct s_gnl *next;
} t_gnl;

int get_next_line(int fd, char **line);
int ft_findnextline(t_gnl *info, char **line);
int ft_readfile(t_gnl *info, char **line);
int ft_strlen(char *str);
char *ft_strdup(char *str);
char *ft_strjoin(char *s1, char *s2);

#endif
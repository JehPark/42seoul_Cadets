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

#define BUFFER_SIZE 8;

typedef struct s_gnl
{
    int fd;
    char *tmp;
    char *stack;
    t_gnl *next;
} t_gnl;

int get_next_line(int fd, char **line);

#endif

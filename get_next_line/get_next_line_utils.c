/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:16:56 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/09 20:17:14 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return len;
}

char *ft_strdup(char *str)
{
    int len;
    char *ret;
    char *tmp;

    len = ft_strlen(str);
    if (!str || !(ret = (char *)malloc(len + 1)))
        return (NULL);
    tmp = ret;
    while (*str)
        *tmp++ = *str++;
    *tmp = '\0';
    return (ret);
}

char *ft_strjoin(char *s1, char *s2)
{
    char *ret;
    char *temp;

    if ((!s1 && !s2) || !(ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
        return (NULL);
    temp = ret;
    while (*s1)
        *temp++ = *s1++;
    while (*s2)
        *temp++ = *s2++;
    *temp = '\0';
    return (ret);
}
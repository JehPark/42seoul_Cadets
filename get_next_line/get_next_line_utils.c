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
    return (len);
}

char *ft_strdup(char *str)
{
    int len;
    char *ret;
    char *tmp;

    len = ft_strlen(str);
    if (!(ret = (char *)malloc(len + 1)))
        return (NULL);
    tmp = ret;
    while (*tmp)
        *tmp++ = *str++;
    *tmp = '\0';
    return (ret);
}

char *ft_strjoin(char *s1, char *s2)
{
    char *ret;
    char *tmp;
    int len1;
    int len2;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    if (!s1 && !s2)
        return (NULL);
    if (!s1 || !s2)
        return s1 == NULL ? ft_strdup(s2) : ft_strdup(s1);
    if (ret = (char *)malloc(len1 + len2 + 1))
        return (NULL);
    tmp = ret;
    while (*s1)
        *tmp++ = *s1++;
    while (*s2)
        *tmp++ = *s2++;
    return (ret);
}
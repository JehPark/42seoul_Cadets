/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:16:56 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 08:56:19 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *str)
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

int		ft_strlcpy(char *dest, char *src, int size)
{
	int idx;
	int len;

	if (!dest || !src)
		return (0);
	idx = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (idx < size)
		dest[idx] = '\0';
	return (len);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*ret;

	len = ft_strlen(str);
	if (!(ret = (char *)malloc(len + 1)))
		return (NULL);
	ft_strlcpy(ret, str, len + 1);
	return (ret);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int		len1;
	int		len2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return (!s1 ? ft_strdup(s2) : s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(ret = (char *)malloc(len1 + len2 + 1)))
		return (NULL);
	ft_strlcpy(ret, s1, len1 + 1);
	ft_strlcpy(ret + len1, s2, len2 + 1);
	free(s1);
	return (ret);
}

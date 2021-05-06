/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:40:50 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/06 12:44:06 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fronttrim(char const *s, char const *set)
{
	unsigned char	*front;
	int				chk[256];
	int				idx;

	idx = 0;
	while (idx < 256)
		chk[idx++] = 0;
	while (*set)
		chk[(unsigned char)*set++] = 1;
	front = (unsigned char *)s;
	while (chk[*front])
		front++;
	return (char *)(front);
}

char	*ft_reartrim(char const *s, char const *set)
{
	int				idx;
	int				chk[256];
	unsigned char	*us;
	char			*rear;

	idx = 0;
	while (idx < 256)
		chk[idx++] = 0;
	while (*set)
		chk[(unsigned char)*set++] = 1;
	us = (unsigned char *)s;
	idx = ft_strlen(s) - 1;
	while (idx >= 0 && chk[us[idx]])
		idx--;
	rear = (char *)&us[idx];
	rear++;
	return (rear);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*front;
	char	*rear;
	char	*ret;

	front = ft_fronttrim(s, set);
	rear = ft_reartrim(s, set);
	if (front > rear)
	{
		if (!(ret = (char *)malloc(1)))
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	if (!(ret = (char *)malloc(rear - front + 1)))
		return (NULL);
	if (rear == front)
	{
		ret[0] = *rear;
		ret[1] = '\0';
		return (ret);
	}
	ft_strscpy(ret, front, (char const *)rear);
	return (ret);
}

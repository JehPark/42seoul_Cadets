/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:12:15 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 07:29:06 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned char	target;
	unsigned char	*src;
	unsigned char	*ret;
	unsigned char	*temp;

	src = (unsigned char *)s;
	target = (unsigned char)start;
	ret = (unsigned char *)malloc(sizeof(char) * (len + 1));
	temp = ret;
	while (*src != target)
		src++;
	while (len)
	{
		*temp++ = *src++;
		len--;
	}
	*temp = '\0';
	return (char *)(ret);
}

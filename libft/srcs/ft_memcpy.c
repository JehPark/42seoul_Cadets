/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:18:29 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 10:49:10 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (s1);
}

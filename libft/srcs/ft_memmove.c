/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:53:51 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 20:29:08 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (!dest && !src)
		return (NULL);
	dest_copy = dest;
	src_copy = (unsigned char *)src;
	if (dest_copy < src_copy)
		while (n--)
			*dest_copy++ = *src_copy++;
	else
	{
		dest_copy += (n - 1);
		src_copy += (n - 1);
		while (n--)
			*dest_copy-- = *src_copy--;
	}
	return (dest);
}

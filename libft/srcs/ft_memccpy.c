/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:32:45 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 10:45:06 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	while (n)
	{
		if (*temp2 == (unsigned char)c)
		{
			*temp1++ = *temp2++;
			return (temp1);
		}
		*temp1++ = *temp2++;
		n--;
	}
	return (NULL);
}

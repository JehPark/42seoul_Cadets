/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:32:45 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/24 10:53:25 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)dest;
	while (n)
	{
		if (*src == (unsigned char)c)
		{
			*temp++ = *src++;
			return (temp);
		}
		*temp++ = *src++;
		n--;
	}
	return (NULL);
}

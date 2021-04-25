/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:15:33 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/24 20:18:58 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_copy;

	s_copy = (const unsigned char *)s;
	while (n)
	{
		if (s_copy == (unsigned char)c)
			return (s_copy);
		s_copy++;
		n--;
	}
	return (NULL);
}

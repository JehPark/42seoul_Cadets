/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:31:20 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 09:56:23 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_cp;
	unsigned char *s2_cp;

	s1_cp = (unsigned char *)s1;
	s2_cp = (unsigned char *)s2;
	while (n)
	{
		if (*s1_cp != *s2_cp)
			return (*s1_cp - *s2_cp);
		s1_cp++;
		s2_cp++;
		n--;
	}
	return (0);
}

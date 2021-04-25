/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 09:36:17 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/25 09:38:55 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int n)
{
	char	dest_cp;
	int		i;

	i = 0;
	dest_cp = dest;
	while (*dest_cp)
		dest_cp++;
	while (*src && i < n)
	{
		*dest_cp++ = src[i];
		i++;
	}
	*dest_cp = '\0';
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 09:33:36 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/25 09:35:22 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char *dest_cp;

	dest_cp = dest;
	while (*dest_cp)
		dest_cp++;
	while (*src)
		*dest_cp++ = *src++;
	*dest_cp = '\0';
	return (dest);
}

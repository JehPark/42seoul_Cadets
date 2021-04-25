/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 09:40:37 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/25 09:46:14 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (*dest && count < size)
	{
		dest++;
		count++;
	}
	while (count + 1 < size && *src)
	{
		*dest++ = *src++;
		count++;
	}
	if (count < size)
		*dest = 0;
	while (*src)
	{
		src++;
		count++;
	}
	return (count);
}

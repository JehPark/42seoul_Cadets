/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 07:49:37 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 09:27:50 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	len;

	if (!dest || !src)
		return (0);
	idx = 0;
	len = (unsigned int)ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (idx < size)
		dest[idx] = '\0';
	return (len);
}

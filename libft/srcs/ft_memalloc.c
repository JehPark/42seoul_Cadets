/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:57:44 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 21:20:05 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ret;

	if (!size)
		return (0);
	ret = (unsigned char *)malloc(size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size);
	return ((void *)ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:03:40 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 09:49:57 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int nbr)
{
	char	*ret;
	int		sign;
	int		size;
	long	n;

	size = ft_cntdigit(nbr);
	sign = nbr < 0 ? 1 : 0;
	size += sign;
	ret = (char *)malloc(size + 1);
	if (!ret)
		return (NULL);
	ret[size] = '\0';
	n = (long)nbr * (long)(sign == 1 ? -1 : 1);
	while (size != sign)
	{
		ret[--size] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		ret[0] = '-';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:57:33 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 22:12:04 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_address(unsigned long nbr, t_info *info)
{
	char	*ret;
	int		size;

	if (info->isfloat && nbr == 0)
	{
		ret = (char *)malloc(2);
		ret[0] = '0';
		ret[1] = 'x';
		return (ret);
	}
	size = ft_cntulhexdigit(nbr) + 2;
	ret = (char *)malloc(size + 1);
	ret[size] = '\0';
	while (size != 1)
	{
		ret[--size] = nbr % 16 + (nbr % 16 > 9 ? 'a' - 10 : '0');
		nbr /= 16;
	}
	ret[0] = '0';
	ret[1] = 'x';
	return (ret);
}

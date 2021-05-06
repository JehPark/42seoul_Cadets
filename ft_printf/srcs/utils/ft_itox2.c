/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoX.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:48:50 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 08:57:27 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoX(unsigned int nbr)
{
	char	*ret;
	int		size;

	size = ft_cnthexdigit(nbr);
	ret = (char *)malloc(size + 1);
	if (!ret)
		return (NULL);
	ret[size--] = '\0';
	while (size != -1)
	{
		ret[size--] = nbr % 16 + (nbr % 16 > 9 ? 'A' - 10 : '0');
		nbr /= 16;
	}
	return (ret);
}

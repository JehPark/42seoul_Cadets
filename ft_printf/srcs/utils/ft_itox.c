/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:31:19 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 08:50:59 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itox(unsigned int nbr)
{
	char	*ret;
	int		size;

	size = ft_cnthexdigit(nbr);
	ret = (char *)malloc(sizeof(char) * size + 1);
	ret[size] = '\0';
	while (size != -1)
	{
		ret[size--] = nbr % 16 + (nbr % 16 > 9 ? 'a' - 10 : '0');
		nbr /= 16;
	}
	return ret;
}

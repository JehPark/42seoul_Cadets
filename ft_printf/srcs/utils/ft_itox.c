/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:31:19 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 19:22:16 by jehpark          ###   ########.fr       */
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
	while (size != 0)
	{
		ret[--size] = nbr % 16 + (nbr % 16 > 9 ? 'a' - 10 : '0');
		nbr /= 16;
	}
	return ret;
}

int		ft_cntoctadigit(unsigned int nbr)
{
	int len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr)
	{
		nbr /= 8;
		len++;
	}
	return (len);
}

char	*ft_itooc(unsigned int nbr)
{
	char	*ret;
	int		size;

	size = ft_cntoctadigit(nbr);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	ret[size] = '\0';
	while (size != 0)
	{
		ret[--size] = nbr % 8 + '0';
		nbr /= 8;
	}
	return (ret);
}

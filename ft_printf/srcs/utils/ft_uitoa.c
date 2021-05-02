/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:22:04 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 08:51:59 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_uitoa(unsigned int nbr)
{
	int		size;
	char	*ret;

	size = ft_cntudigit(nbr);
	ret = (char *)malloc(size + 1);
	if (!ret)
		return (NULL);
	ret[size--] = '\0';
	while (size != -1)
	{
		ret[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (ret);
}

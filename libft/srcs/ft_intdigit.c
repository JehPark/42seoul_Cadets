/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:07:43 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 10:45:54 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intdigit(int n)
{
	int	len;
	int	nbr;

	len = 0;
	nbr = n > 0 ? n : -n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:07:43 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 15:26:26 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intdigit(int n)
{
	int	len;
	int	nbr;

	if (n == 0)
		return (1);
	len = 0;
	nbr = n > 0 ? n : -n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

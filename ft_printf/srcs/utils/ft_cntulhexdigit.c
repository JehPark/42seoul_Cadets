/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntulhexdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:36:29 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 09:37:36 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_cntulhexdigit(unsigned long nbr)
{
	int len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

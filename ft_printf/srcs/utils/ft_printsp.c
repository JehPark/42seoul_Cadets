/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:11:04 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 17:32:20 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printsp(int nbr, char sp)
{
	int cnt;

	cnt = 0;
	while (nbr)
	{
		ft_putchar(sp);
		nbr--;
		cnt++;
	}
	return (cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchwiths.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:10:20 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 13:30:45 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchwiths(char ch, int digit)
{
	int cnt;

	cnt = 0;
	if (digit >= 2)
	{
		ft_printsp(digit - 1);
		cnt += digit - 1;
	}
	ft_putchar(ch);
	cnt++;
	if (digit <= -2)
	{
		ft_printsp(-(digit + 1));
		cnt += -(digit + 1);
	}
	return (cnt);
}

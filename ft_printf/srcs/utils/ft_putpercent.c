/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:05:33 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/14 17:41:29 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putpercent(t_info *info)
{
	char	sp;
	int		cnt;

	cnt = 0;
	sp = ' ';
	if (info->iszero)
		sp = '0';
	if (info->digit >= 2)
	{
		ft_printsp(info->digit - 1, sp);
		cnt += info->digit - 1;
	}
	ft_putchar('%');
	cnt++;
	if (info->digit <= -2)
	{
		ft_printsp(-(info->digit + 1), ' ');
		cnt += -(info->digit + 1);
	}
	return (cnt);
}

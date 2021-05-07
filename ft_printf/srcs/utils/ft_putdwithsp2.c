/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdwithsp2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:19:06 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 17:53:01 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putzesp(char *nbr, t_info *info)
{
	int cnt;
	int	len;
	int prec;
	int sign;

	cnt = 0;
	prec = info->precision;
	if (*nbr == '-')
		cnt++;
	len = prec > ft_strlen(nbr) ? prec + cnt : ft_strlen(nbr);
	sign = prec > ft_strlen(nbr) ? cnt : 0;
	if (info->digit - len > 0)
		cnt += ft_printsp(info->digit - len, ' ');
	if (*nbr == '-')
		ft_putchar(*nbr++);
	if (len == prec + sign)
	{
		len = ft_strlen(nbr);
		cnt += ft_printsp(prec - len, '0');
	}
	cnt += ft_putnstr(nbr);
	return (cnt);
}

int		ft_putmizesp(char *nbr, t_info *info)
{
	int cnt;

	cnt = 0;
	if (*nbr == '-')
		ft
	return (cnt);
}

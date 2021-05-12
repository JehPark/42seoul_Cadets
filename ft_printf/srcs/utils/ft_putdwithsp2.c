/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdwithsp2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:19:06 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 20:33:20 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putzesp(char *nbr, t_info *info)
{
	int cnt;
	int len;
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

int ft_putmizesp(char *nbr, t_info *info)
{
	int cnt;
	int len;
	int n_space;

	cnt = 0;
	if (*nbr == '-')
	{
		ft_putchar(*nbr++);
		cnt++;
	}
	len = ft_strlen(nbr);
	if (info->precision - len > 0)
		cnt += ft_printsp(info->precision - len, '0');
	cnt += ft_putnstr(nbr);
	n_space = -info->digit;
	if (n_space - cnt > 0)
		cnt += ft_printsp(n_space - cnt, ' ');
	return (cnt);
}

int ft_treatnzero(char *nbr, t_info *info)
{
	int cnt;

	cnt = 0;
	if (info->precision == 0 && info->digit == 0)
		return (cnt);
	else if (info->precision == 0 && info->digit > 0)
	{
		nbr = " ";
		cnt += ft_putdfrontsp(nbr, info);
	}
	else if (info->precision == 0 && info->digit < 0)
	{
		nbr = " ";
		cnt += ft_putdrearsp(nbr, info);
	}
	else if (info->precision > 0 && info->digit == 0)
		cnt += ft_putfloatzeros(nbr, info);
	else if (info->digit > 0)
		cnt += ft_putzesp(nbr, info);
	else if (info->digit < 0)
		cnt += ft_putmizesp(nbr, info);
	return (cnt);
}

int	ft_putdwithsp2(char *nbr, t_info *info)
{
	int cnt;

	cnt = 0;
	if (info->digit < 0 && info->isfloat == 0)
		cnt += ft_putdrearsp(nbr, info);
	else if (info->digit == 0 && info->isfloat)
		cnt += ft_putfloatzeros(nbr, info);
	else if (info->digit > 0 && info->iszero && !(info->isfloat))
		cnt += ft_putzeros(nbr, info);
	else if (info->digit > 0 && info->isfloat)
		cnt += ft_putzesp(nbr, info);
	else if (info->digit < 0 && info->isfloat)
		cnt += ft_putmizesp(nbr, info);
	return (cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdwithsp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:43:19 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 19:46:35 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putdfrontsp(char *nbr, t_info *info)
{
	int cnt;
	int	len;

	cnt = 0;
	len = ft_strlen(nbr);
	if (info->digit - len > 0)
	{
		ft_printsp(info->digit - len, ' ');
		cnt += info->digit - len;
	}
	cnt += ft_putnstr(nbr);
	return (cnt);
}

int		ft_putdrearsp(char *nbr, t_info *info)
{
	int cnt;
	int	len;

	cnt = 0;
	cnt += ft_putnstr(nbr);
	len = ft_strlen(nbr);
	if (info->digit + len < 0)
	{
		ft_printsp(-(info->digit + len), ' ');
		cnt += -(info->digit + len);
	}
	return (cnt);
}

int		ft_putfloatzeros(char *nbr, t_info *info)
{
	int cnt;
	int len;

	cnt = 0;
	if (*nbr == '-')
	{
		ft_putchar(*nbr++);
		cnt++;
	}
	len = ft_strlen(nbr);
	if (info->precision - len > 0)
	{
		ft_printsp(info->precision - len, '0');
		cnt += info->precision - len;
	}
	cnt += ft_putnstr(nbr);
	return (cnt);
}

int		ft_putzeros(char *nbr, t_info *info)
{
	int cnt;
	int	len;

	cnt = 0;
	if (*nbr == '-')
	{
		ft_putchar(*nbr++);
		cnt++;
	}
	len = ft_strlen(nbr);
	if (info->digit - len - cnt > 0)
	{
		ft_printsp(info->digit - len - cnt, '0');
		cnt += info->digit - len - cnt;
	}
	cnt += ft_putnstr(nbr);
	return (cnt);
}

int		ft_putdwithsp(char *nbr, t_info *info)
{
	int cnt;

	cnt = 0;
	if (info->digit == 0 && info->precision == 0)
		cnt += ft_putnstr(nbr);
	else if (!(info->iszero) && info->digit > 0 && info->isfloat == 0)
		cnt += ft_putdfrontsp(nbr, info);
	else if (info->digit < 0 && info->isfloat == 0)
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

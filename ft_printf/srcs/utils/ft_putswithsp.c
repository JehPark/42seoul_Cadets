/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putswithsp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:53:06 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 19:48:42 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putswithsp(char *str, t_info *info)
{
	int cnt;
	int len;
	int prec;

	cnt = 0;
	len = ft_strlen(str);
	prec = info->precision;
	if (info->isfloat)
		len = prec < ft_strlen(str) ? prec : ft_strlen(str);
	if (info->digit - len > 0 && info->digit != 0)
	{
		ft_printsp(info->digit - len, ' ');
		cnt += info->digit - len;
	}
	cnt += ft_putstarstr((const char *)str, &len, info);
	if (info->digit + len < 0 && info->digit != 0)
	{
		ft_printsp((info->digit + len) * -1, ' ');
		cnt += (info->digit + len) * -1;
	}
	return (cnt);
}

int		ft_putstarstr(const char *str, int *len, t_info *info)
{
	int cnt;

	cnt = 0;
	if (info->precision < 0)
		cnt = ft_putlstr(str, ft_strlen((char *)str));
	else
		cnt = ft_putlstr(str, *len);
	if (info->digit < 0 && info->precision < 0)
		*len = ft_strlen((char *)str);
	return (cnt);
}

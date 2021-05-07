/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putswithsp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:53:06 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 10:15:43 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putswithsp(char *str, t_info *info)
{
	int cnt;
	int	len;
	int	prec;
	int digit;

	cnt = 0;
	len = ft_strlen(str);
	digit = info->digit;
	prec = info->precision;
	if (info->isfloat)
		len = prec < ft_strlen(str) ? prec : ft_strlen(str);
	if (digit - len > 0)
	{
		ft_printsp(digit - len, ' ');
		cnt += digit - len;
	}
	cnt += ft_putlstr((const char *)str, len);
	if (digit + len < 0)
	{
		ft_printsp((digit + len) * - 1, ' ');
		cnt += (digit + len) * -1;
	}
	return (cnt);
}

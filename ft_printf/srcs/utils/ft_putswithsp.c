/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putswithsp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:53:06 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 14:12:21 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putswithsp(char *str, int digit)
{
	int cnt;
	int	len;

	cnt = 0;
	len = ft_strlen(str);
	if (digit - len > 0)
	{
		ft_printsp(digit - len);
		cnt += digit - len;
	}
	cnt += ft_putnstr((const char *)str);
	if (digit + len < 0)
	{
		ft_printsp((digit + len) * - 1);
		cnt += (digit + len) * -1;
	}
	return (cnt);
}

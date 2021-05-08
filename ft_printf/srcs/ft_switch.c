/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:25:47 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/08 09:03:13 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		ft_switchchar(char mk, va_list argv, t_info *info)
{
	char	ch;
	char	*str;
	int		cnt;

	cnt = 0;
	if (mk == '%')
		cnt = ft_putpercent(info);
	if (mk == 'c')
	{
		ch = va_arg(argv, int);
		cnt = ft_putchwiths(ch, info->digit);
	}
	else if (mk == 's')
	{
		str = va_arg(argv, char *);
		if (str == NULL)
			ft_treatnull(&str, info);
		cnt = ft_putswithsp(str, info);
	}
	return (cnt);
}

int		ft_switchnbr(char mk, va_list argv, t_info *info)
{
	char 			*nbr;
	int				d;
	unsigned int	u;
	int				cnt;

	cnt = 0;
	if (mk == 'd' || mk == 'i')
	{
		d = va_arg(argv, int);
		nbr = ft_itoa(d);
		cnt = ft_putdwithsp(nbr, info);
	}
	else if (mk == 'u')
	{
		u = va_arg(argv, unsigned int);
		nbr = ft_uitoa(u);
		cnt = ft_putdwithsp(nbr, info);
	}
	return (cnt);
}

int		ft_switchhex(char mk, va_list argv, t_info *info)
{
	unsigned int	x;
	char			*hex;
	unsigned long	addr;
	int cnt;
	
	info->ishex = 1;
	cnt = 0;
	if (mk == 'x' || mk == 'X')
	{
		x = va_arg(argv, unsigned int);
		hex = mk == 'x' ? ft_itox(x) : ft_itoX(x);
		cnt = ft_putnstr(hex);
	}
	else if (mk == 'p')
	{
		addr = va_arg(argv, unsigned long);
		hex = ft_address(addr);
		cnt = ft_putswithsp(hex, info);
	}
	return (cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:25:47 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 13:19:46 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_switchchar(char mk, va_list argv, t_info *info)
{
	char	ch;
	char	*str;
	int		cnt;

	if (mk == '%')
	{
		ft_putchar('%');
		cnt = 1;
	}
	else if (mk == 'c')
	{
		ch = va_arg(argv, int);
		cnt = ft_putchwiths(ch, info->digit);
	}
	else if (mk == 's')
	{
		str = va_arg(argv, char *);
		cnt = ft_putnstr(str);
	}
	return (cnt);
}

int		ft_switchnbr(char mk, va_list argv, t_info *info)
{
	char 			*nbr;
	int				d;
	unsigned int	u;
	int				cnt;

	if (mk == 'd' || mk == 'i' || info->digit)
	{
		d = va_arg(argv, int);
		nbr = ft_itoa(d);
		cnt = ft_putnstr(nbr);
	}
	else if (mk == 'u')
	{
		u = va_arg(argv, unsigned int);
		nbr = ft_uitoa(u);
		cnt = ft_putnstr(nbr);
	}
	return (cnt);
}

int		ft_switchhex(char mk, va_list argv, t_info *info)
{
	unsigned int	x;
	char			*hex;
	unsigned long	addr;
	int cnt;
	
	if (mk == 'x' || info->digit)
	{
		x = va_arg(argv, unsigned int);
		hex = ft_itox(x);
		cnt = ft_putnstr(hex);
	}
	else if (mk == 'X')
	{
		x = va_arg(argv, unsigned int);
		hex = ft_itoX(x);
		cnt = ft_putnstr(hex);
	}
	else if (mk == 'p')
	{
		addr = va_arg(argv, unsigned long);
		hex = ft_address(addr);
		cnt = ft_putnstr(hex);
	}
	return (cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:25:47 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/02 09:08:52 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_switchchar(char mk, va_list argv, int cnt)
{
	char	ch;
	char	*str;

	if (mk == '%')
	{
		ft_putchar('%');
		cnt++;
	}
	else if (mk == 'c')
	{
		ch = va_arg(argv, char);
		ft_putchar(ch);
	}
	else if (mk == 's')
	{
		str = va_arg(argv, char *);
		cnt += ft_putnstr(str);
	}
	return (cnt);
}

int		ft_switchnbr(char mk, va_list argv, int cnt)
{
	char 			*nbr;
	int				d;
	unsigned int	u;

	if (mk == 'd' || mk == 'i')
	{
		d = va_arg(argv, int);
		nbr = ft_itoa(d);
		cnt += ft_putnstr(nbr);
	}
	else if (mk == 'u')
	{
		u = va_arg(argv, unsigned int);
		nbr = ft_uitoa(u);
		cnt += ft_putnstr(nbr);
	}
	return (cnt);
}

int		ft_switchhex(char mk, va_list argv, int cnt)
{
	unsigned int	x;
	char			*hex;
	unsigned long	addr;

	if (mk == 'x')
	{
		x = va_arg(argv, unsigned int);
		hex = ft_itox(x);
		cnt += ft_putnstr(hex);
	}
	else if (mk == 'X')
	{
		x = va_arg(argv, unsigned int);
		hex = ft_itoX(x);
		cnt += ft_putnstr(hex);
	}
	else if (mk == 'p')
	{
		addr = va_arg(argv, unsigned long);
		hex = ft_address(addr);
		cnt += ft_putnstr(hex);
	}
	return (cnt);
}

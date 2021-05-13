/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 08:55:08 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 23:04:45 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_bigswitch(t_info *info, char ch, va_list argv)
{
	int cnt;

	cnt = 0;
	if (ch == '%' || ch == 'c' || ch == 's')
		cnt += ft_switchchar(ch, argv, info);
	else if (ch == 'i' || ch == 'd' || ch == 'u')
		cnt += ft_switchnbr(ch, argv, info);
	else if (ch == 'p' || ch == 'x' || ch == 'X')
		cnt += ft_switchhex(ch, argv, info);
	else if (ch == 'o')
		cnt += ft_switchoctal(ch, argv, info);
	return (cnt);
}

int	ft_converts(const char *str, va_list argv, int cnt)
{
	t_info info;

	ft_infoinit(&info);
	while (*str)
	{
		if (*str == '%')
		{
			ft_infoinit(&info);
			if (ft_isstar(++str))
				str += ft_starinfo(str, &info, argv);
			else if (ft_isnum(*str))
				str += ft_mkinfo(str, &info);
			if (ft_isflag(str))
			{
				cnt += ft_bigswitch(&info, *str, argv);
				str += ft_isflag(str);
			}
		}
		else
			cnt += ft_putchar(*str++);
	}
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list argv;
	int		done;

	va_start(argv, str);
	done = ft_converts(str, argv, 0);
	va_end(argv);
	return (done);
}

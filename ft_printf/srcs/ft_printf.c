/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 08:55:08 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/03 13:27:03 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_bigswitch(t_info *info, char ch, va_list argv)
{
	int cnt;

	cnt = 0;
	if (ch == '%' || ch == 'c' || ch == 's')
		cnt += ft_switchchar(ch, argv, info);
	else if (ch == 'i' || ch == 'd' || ch == 'u')
		cnt += ft_switchnbr(ch, argv, info);
	else if (ch == 'p' || ch == 'x' || ch == 'X')
		cnt += ft_switchhex(ch, argv, info);
	return (cnt);
}

int		ft_converts(const char *str, va_list argv, int cnt)
{
	t_info info;

	ft_infoinit(&info);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_isnumanddot(*str))
			{
				ft_mkinfo(str, &info);
				while (ft_isnumanddot(*str))
					str++;
			}
			if (ft_isflag(*str))
				cnt += ft_bigswitch(&info, *str, argv);
			str++;
		}
		else
		{
			ft_putchar(*str++);
			cnt++;
		}
	}
	return (cnt);
}

int		ft_printf(const char *str, ...)
{
	va_list	argv;
	int		done;

	va_start(argv, str);
	done = ft_converts(str, argv, 0);
	va_end(argv);
	return (done);
}

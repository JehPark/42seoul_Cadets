/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 08:55:08 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/01 15:23:01 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_converts(const char *str, va_list argv, int cnt)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%' || *str == 'c' || *str == 's' || *str == 'p')
				cnt += ft_switchchar(*str, argv, cnt);
			else if (*str == 'i' || *str == 'd' || *str == 'u'
					*str == 'x' || *str == 'X')
				cnt += ft_switchnbr(*str, argv, cnt);
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
	done = ft_handle_print(str, argv, 0);
	va_end(argv);
	return (done);
}

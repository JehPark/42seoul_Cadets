/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_starinfo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 10:44:04 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/08 13:45:28 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_starinit(t_star *star)
{
	star->sign = 1;
	star->dot = 0;
	star->n_star = 0;
	star->iszero = 0;
}

int		ft_setstar_i(const char *str, t_star *star)
{
	int cnt;

	cnt = 0;
	while (!(ft_isflag(str)))
	{
		if (*str == '-')
			star->sign = -1;
		else if (*str == '*')
			star->n_star += 1;
		else if (*str == '.')
			star->dot += 1;
		else if (*str == '0')
			star->iszero = 1;
		str++;
		cnt++;
	}
	return (cnt);
}

void	ft_setinfost(t_info *info, va_list argv, t_star *star)
{
	int digit;

	digit = 0;
	if (star->n_star == 1 && star->dot == 0)
	{
		digit = va_arg(argv, int);
		if (star->sign < 0 && digit > 0)
			info->digit = digit * -1;
		else
			info->digit = digit;
	}
	else if (star->n_star == 1 && star->dot == 1)
		info->precision = va_arg(argv, int);
	else if (star->n_star == 2 && star->dot == 1)
	{
		digit = va_arg(argv, int);
		if(star->sign < 0 && digit > 0)
			info->digit = digit * -1;
		else
			info->digit = digit;
		info->precision = va_arg(argv, int);
	}
}

int		ft_starinfo(const char *str, t_info *info, va_list argv)
{
	t_star	star_i;
	int		cnt;

	ft_starinit(&star_i);
	cnt = ft_setstar_i(str, &star_i);
	ft_setinfost(info, argv, &star_i);
	if (star_i.iszero)
		info->iszero = 1;
	return (cnt);
}

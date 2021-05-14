/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_starinfo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 10:44:04 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/14 14:10:04 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_starinit(t_star *star)
{
	star->sign = 1;
	star->dot = 0;
	star->n_star = 0;
	star->iszero = 0;
	star->innbr = 0;
	star->isspace = 0;
	star->isstring = 0;
}

int		ft_setinfost(const char *str, t_info *info, va_list argv)
{
	int cnt;

	cnt = 0;
	info->risk = 1;
	if (str[cnt] == '*')
	{
		info->digit = va_arg(argv, int);
		cnt++;
	}
	if (str[cnt] == '.')
	{
		cnt++;
		if (cnt == 2)
			info->isfloat = 1;
	}
	if (str[cnt] == '*')
	{
		info->precision = va_arg(argv, int);
		info->isfloat = 1;
		cnt++;
	}
	return (cnt);
}

int		ft_starinfo(const char *str, t_info *info, va_list argv)
{
	t_star	star_i;
	int		cnt;

	cnt = 0;
	ft_starinit(&star_i);
	cnt += ft_starzemi((char *)str, &star_i);
	if ('0' <= *(str + cnt) && *(str + cnt) <= '9')
		info->digit = ft_atoi((char *)(str + cnt));
	while ('0' <= *(str + cnt) && *(str + cnt) <= '9')
		cnt++;
	cnt += ft_setinfost(str + cnt, info, argv);
	info->digit = info->digit > 0 ? info->digit * star_i.sign : info->digit;
	info->iszero = star_i.iszero ? 1 : 0;
	if ('0' <= *(str + cnt) && *(str + cnt) <= '9')
	{
		info->precision = ft_atoi((char *)(str + cnt));
		info->isfloat = 1;
	}
	while ('0' <= *(str + cnt) && *(str + cnt) <= '9')
		cnt++;
	return (cnt);
}

int		ft_starzemi(char *str, t_star *star)
{
	int cnt;

	cnt = 0;
	if (*str == '0' || *str == '-')
	{
		if (*str == '-')
			star->sign = -1;
		else
			star->iszero = 1;
		cnt++;
	}
	while (str[cnt] == '-' || str[cnt] == '0')
	{
		star->iszero = 0;
		star->sign = -1;
		cnt++;
	}
	return (cnt);
}

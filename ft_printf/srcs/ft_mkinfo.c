/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:04:26 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/14 13:41:37 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isfloat(char *str, t_info *info)
{
	while (ft_isnum(*str))
	{
		if (*str == '.')
		{
			info->isfloat = 1;
			return (1);
		}
		str++;
	}
	info->isint = 1;
	return (0);
}

int		ft_consign(char *str, int *sign)
{
	int cnt;

	cnt = 0;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		*sign = -1;
		cnt++;
	}
	return (cnt);
}

int		ft_intinfo(const char *str, t_info *info)
{
	char	*temp;
	int		sign;
	char	*nbr;
	char	*start;

	sign = 1;
	temp = (char *)str;
	temp += ft_consign((char *)temp, &sign);
	start = temp;
	while ('0' <= *temp && *temp <= '9')
		temp++;
	temp += ft_consign((char *)temp, &sign);
	while ('0' <= *temp && *temp <= '9')
		temp++;
	if (!(nbr = (char *)malloc(temp - start + 1)))
		return (0);
	ft_strscpy(nbr, start, temp);
	info->digit = ft_atoi(nbr) * sign;
	free(nbr);
	return (int)(temp - str);
}

int		ft_floatinfo(const char *str, t_info *info)
{
	char	*temp;
	int		sign;
	char	*nbr;
	char	*start;

	sign = 1;
	temp = (char *)str;
	temp += ft_consign((char *)temp, &sign);
	start = temp;
	while (('0' <= *temp && *temp <= '9') || *temp == '.')
		temp++;
	if (!(nbr = (char *)malloc(temp - start + 1)))
		return (0);
	ft_strscpy(nbr, start, temp);
	ft_atof(nbr, sign, info);
	free(nbr);
	return (int)(temp - str);
}

int		ft_mkinfo(const char *str, t_info *info)
{
	int		cnt;
	char	*temp;
	int		sign;

	sign = 0;
	temp = (char *)str;
	if (temp[0] == '0')
	{
		info->iszero = 1;
		str++;
		sign++;
	}
	if (ft_isfloat(temp, info))
		cnt = ft_floatinfo(str, info);
	else
	{
		if (*temp == '0')
		{
			str--;
			sign--;
		}
		cnt = ft_intinfo(str, info);
	}
	return (cnt + sign);
}

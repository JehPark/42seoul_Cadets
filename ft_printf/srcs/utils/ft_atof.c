/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:55 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/05 09:28:26 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

float	ft_atof(char *nbr, int sign, t_info *info)
{
	int		ans;
	int		div;
	char	*temp;

	ans = 0;
	div = 0;
	temp = nbr;
	while ('0' <= *temp && *temp <= '9' && *temp != '.')
	{
		ans *= 10;
		ans += (int)(*temp++ - '0');
	}
	info->digit = ans * sign;
	temp++;
	while (*temp && *temp >= '0' && *temp <= '9')
	{
		div *= 10;
		div += (int)(*temp++ - '0');
	}
	info->precision = div;
	return (ans);
}

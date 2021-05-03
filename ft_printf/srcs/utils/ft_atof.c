/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:55 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/03 15:19:55 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

float	ft_atof(char *nbr)
{
	float	ans;
	float	div;

	ans = 0.0f;
	div = 1.0f;
	while (*nbr != '.')
	{
		ans *= 10;
		ans += *nbr++ - '0';
	}
	nbr++;
	while (*nbr && *nbr >= '0' && *nbr <= '9')
	{
		div /= 10.0f;
		ans += (float)(*nbr++ - '0') * div;
	}
	return (ans);
}

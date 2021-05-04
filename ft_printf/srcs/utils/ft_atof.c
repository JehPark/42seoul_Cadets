/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:09:55 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 16:16:13 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

float	ft_atof(char *nbr)
{
	float	ans;
	float	div;
	char	*temp;

	ans = 0.0f;
	div = 1.0f;
	temp = nbr;
	while ('0' <= *temp && *temp <= '9' && *temp != '.')
	{
		ans *= 10.0f;
		ans += (float)(*temp - '0');
		temp++;
	}
	temp++;
	while (*temp && *temp >= '0' && *temp <= '9')
	{
		div /= 10.0f;
		ans += (float)(*temp - '0') * div;
		temp++;
	}
	return (ans);
}

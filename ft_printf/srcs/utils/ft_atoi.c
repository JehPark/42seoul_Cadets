/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:20:05 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 19:59:39 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(char *nbr)
{
	int		ans;
	char	*temp;

	temp = nbr;
	ans = 0;
	while ('0' <= *temp && *temp <= '9')
	{
		ans *= 10;
		ans += *temp++ - '0';
	}
	return (ans);
}

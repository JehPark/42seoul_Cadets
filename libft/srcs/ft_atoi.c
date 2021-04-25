/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 08:18:47 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/26 08:34:36 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' str[i] == '-')
	{
		if (str[i] == '-')
			str *= -1;
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= 9)
		nbr = (str[i++] - '0') + (nbr * 10);
	return (nbr * sign);
}

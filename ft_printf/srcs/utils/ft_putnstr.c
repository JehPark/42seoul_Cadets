/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:34:50 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/01 15:37:16 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnstr(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		ft_putchar(*str++);
		len++;
	}
	return (len);
}

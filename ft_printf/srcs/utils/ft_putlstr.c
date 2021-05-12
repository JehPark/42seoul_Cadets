/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 08:39:16 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 22:31:03 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putlstr(const char *str, int len)
{
	int		idx;
	char	*temp;

	idx = 0;
	temp = (char *)str;
	while (idx < len)
	{
		ft_putchar(*temp++);
		idx++;
	}
	return (len);
}

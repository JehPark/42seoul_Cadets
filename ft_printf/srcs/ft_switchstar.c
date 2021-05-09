/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switchstar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:18:07 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/08 18:22:01 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_switchstar(char ch, va_list argv, t_info *info)
{
	int cnt;
	int nb;
	
	cnt = 0;
	nb = va_arg(argv, int);
	if (ch == 's')
		info->digit = 0;
	nb++;
	return (cnt);
}

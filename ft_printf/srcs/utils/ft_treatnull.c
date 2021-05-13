/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatnull.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:24:35 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 17:39:38 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treatnull(char **str, t_info *info)
{
	info->isnull = 1;
	if (info->isfloat && info->precision < 6)
		*str = "(null)";
	else
		*str = "(null)";
	if (info->isstar)
	{
		info->precision = 0;
		info->digit = 0;
		info->isfloat = 0;
	}
}

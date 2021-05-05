/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatnull.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:24:35 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/05 14:35:10 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treatnull(char **str, t_info *info)
{
	info->isnull = 1;
	if (info->isfloat && info->precision < 6)
		*str = "";
	else
		*str = "(null)";
}

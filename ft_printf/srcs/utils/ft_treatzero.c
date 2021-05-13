/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:08:55 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/13 23:09:22 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_treatzero(t_info *info)
{
	char	*msg;

	info->isnull = 1;
	if (info->isfloat && info->precision < 5)
		msg = "";
	else
		msg = "(nil)";
	return (msg);
}

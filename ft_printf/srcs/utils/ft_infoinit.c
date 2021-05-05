/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_infoinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:26:48 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/05 08:30:16 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_infoinit(t_info *info)
{
  info->digit = 0;
  info->precision = 0;
  info->isplus = 0;
  info->isfloat = 0;
  info->isint = 0;
}

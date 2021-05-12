/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:31:20 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 18:56:01 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_isflag(const char *str)
{
  if (*str == '%' || *str == 'c' || *str == 's'
      || *str == 'i' || *str == 'd' || *str == 'u'
      || *str == 'p' || *str == 'x' || *str == 'X'
	  || *str == 'o')
      return (1);
	return (0);
}

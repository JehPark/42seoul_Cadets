/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:04:26 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 10:19:50 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_mkinfo(const char *str, t_info *info)
{
  char  *temp;
  char  *nbr;
  int   flag;

  temp = (char *)str;
  flag = 1;
  if (*temp == '.' || *temp == '-')
	  flag = *temp++ == '-' ? -1 : 2;
  while('0' <= *temp && *temp <= '9')
	  temp++;
  nbr = (char *)malloc(temp - str + 1);
  ft_strscpy(nbr, str, temp);
  if (flag == 2)
    info->precision = ft_atof(nbr);
  else
    info->digit = ft_atoi(nbr) * flag;
  free(nbr);
  return (int)(temp - str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:04:26 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/03 14:04:28 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_info  *ft_mkinfo(const char *str, t_info *info)
{
  char  *temp;
  char  *nbr;
  int   flag;

  temp = (char *)str;
  flag = 0;
  while (ft_isnumanddot(*temp))
  {
    if (*temp == '.')
      flag = 1;
    temp++;
  }
  nbr = (char *)malloc(temp - str + 1);
  ft_strscpy(nbr, str, temp);
  if (flag)
    info->precision = ft_atof(nbr);
  else
    info->digit = ft_atoi(nbr);
  free(nbr);
  return (info);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkinfo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:04:26 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/04 14:21:08 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_mkinfo(const char *str, t_info *info)
{
  char  *temp;
  char  *nbr;
  int   flag;
  char	*start;

  temp = (char *)str;
  flag = 1;
  if (*temp == '.' || *temp == '-')
	  flag = *temp++ == '-' ? -1 : 2;
  start = temp;
  while('0' <= *temp && *temp <= '9')
	  temp++;
  if (!(nbr = (char *)malloc(temp - start + 1)))
	  return (0);
  ft_strscpy(nbr, start, temp);
  if (flag == 2)
    info->precision = ft_atof(nbr);
  else
    info->digit = ft_atoi(nbr) * flag;
  free(nbr);
  return (int)(temp - str);
}

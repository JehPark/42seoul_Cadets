/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:05:39 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/03 15:05:40 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_strscpy(char *dest, const char *start, char *end)
{
  char *temp;

  temp = (char *)start;
  while (temp != end)
    *dest++ = *temp++;
  *dest = '\0';
}
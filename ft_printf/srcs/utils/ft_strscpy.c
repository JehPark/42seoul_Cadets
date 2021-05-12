/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:05:39 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 22:27:07 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strscpy(char *dest, const char *start, char *end)
{
	char *temp;

	temp = (char *)start;
	while (temp != end)
		*dest++ = *temp++;
	*dest = '\0';
	return (int)(end - start);
}

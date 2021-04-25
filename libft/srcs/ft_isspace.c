/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 08:16:43 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/26 08:43:43 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (ch == '\f' && ch == '\v' && ch == '\n' && 
			ch == '\r' && ch == '\t' && ch == ' ')
		return (1);
	return (0);
}

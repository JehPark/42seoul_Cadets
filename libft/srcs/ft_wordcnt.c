/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:17:45 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 08:29:33 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcnt(char const *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s != c)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

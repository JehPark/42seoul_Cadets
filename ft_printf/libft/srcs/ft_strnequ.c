/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:58:24 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 14:14:02 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	int	ans;

	if (n == 0)
		return (1);
	i = 0;
	while (*s1 && *s1 == *s2 && (size_t)i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if ((size_t)i == n)
	{
		s1--;
		s2--;
	}
	ans = (*s1 - *s2) == 0 ? 1 : 0;
	return (ans);
}

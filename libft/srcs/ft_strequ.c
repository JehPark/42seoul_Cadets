/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:52:59 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 19:15:22 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		ans;

	ans = ft_strcmp((char *)s1, (char *)s2) != 0 ? 0 : 1;
	return (ans);
}

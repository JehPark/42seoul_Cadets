/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 10:00:45 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/26 07:57:11 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return (big);
	while (big[i] && i < len)
	{
		while ((big[i + j] == little[j]) && little[j] && (i + j) < len)
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (0);
}

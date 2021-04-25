/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 10:00:45 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/26 07:58:13 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*finder;
	char	*ans;
	char	*word;

	if (!*little)
		return (str);
	finder = big;
	word = little;
	while (*finder)
	{
		ans = finder;
		while (*word && *finder == *word)
		{
			finder++;
			word++;
		}
		if (*word == 0)
			return (ans);
		word = to_find;
		if (!*finder)
			break ;
		finder++;
	}
	return (0);
}

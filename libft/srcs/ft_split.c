/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:12:41 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 08:10:40 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*word;
	char	*start;
	int		idx;

	idx = 0;
	ret = (char **)malloc(sizeof(char *) * (ft_wordcnt(s, c) + 1));
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s)
				s++;
			word = (char *)malloc(sizeof(char) * (s - start + 1));
			ft_strscpy(word, start, s);
			ret[idx++] = word;
		}
		else
			s++;
	}
	ret[idx] = '\0';
	return (ret);
}

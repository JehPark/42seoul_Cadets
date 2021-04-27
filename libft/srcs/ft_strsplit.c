/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:12:41 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 08:47:36 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
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
			start = s;
			while (*s != c)
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

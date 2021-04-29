/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:12:41 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/30 08:36:57 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_mal_error(char **ret, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
		free(ret[i++]);
	free(ret);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	char	*start;
	int		idx;

	idx = 0;
	if (!(ret = (char **)malloc(sizeof(char *) * (ft_wordcnt(s, c) + 1))))
		return (char **)(NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s)
				s++;
			if (!(ret[idx] = (char *)malloc(sizeof(char) * (s - start + 1))))
				return (ft_mall_error(ret, idx));
			ft_strscpy(ret[idx++], start, s);
		}
		s++;
	}
	ret[idx] = '\0';
	return (ret);
}

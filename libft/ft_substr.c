/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:53:19 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/07 15:36:26 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		idx;
	char	*st;
	char	*ret;

	if (!s)
		return (NULL);
	idx = ft_strlen(s);
	if (start >= (unsigned int)idx)
		return (ft_strdup(""));
	while (start)
	{
		idx--;
		start--;
		s++;
	}
	st = (char *)s;
	if (idx <= (int)len)
		len = idx;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strscpy(ret, st, st + len);
	return (ret);
}

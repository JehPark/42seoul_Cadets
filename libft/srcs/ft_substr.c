/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:53:19 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 10:40:54 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		idx;
	char	*st;
	char	*ret;

	idx = ft_strlen(s);
	while (start)
	{
		idx--;
		start--;
		s++;
	}
	st = (char *)s;
	if (idx <= (int)len)
		len = idx;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	ft_strscpy(ret, st, st + len);
	return (ret);
}

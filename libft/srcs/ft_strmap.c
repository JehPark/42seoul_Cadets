/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:40:21 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 19:20:54 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		len;
	char	*temp;
	char	*str_copy;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	temp = ret;
	str_copy = (char *)s;
	while (*str_copy)
		*temp++ = (*f)(*str_copy++);
	*temp = '\0';
	return (ret);
}

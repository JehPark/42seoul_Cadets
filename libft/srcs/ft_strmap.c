/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:40:21 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/26 19:46:02 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		len;
	char	*temp;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	temp = ret;
	while (*s)
		*temp = (*f)(*s++);
	*temp = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:30:44 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/30 06:59:35 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		size1;
	int		size2;
	char	*temp;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!ret)
		return (NULL);
	temp = ret;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (ret);
}

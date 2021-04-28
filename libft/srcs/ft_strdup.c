/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:43:00 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 09:59:18 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;
	char	*ret;
	int		len;

	len = (int)ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	temp = ret;
	while (*s)
		*temp++ = *s++;
	*temp = 0;
	return (ret);
}

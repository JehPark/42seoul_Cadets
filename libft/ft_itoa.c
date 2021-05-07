/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:01:32 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/30 07:12:51 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;
	int		flag;
	long	nbr;

	len = ft_intdigit(n);
	flag = n < 0 ? 1 : 0;
	len += flag;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	nbr = (long)n * (long)(flag == 1 ? -1 : 1);
	while (len != flag)
	{
		ret[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (flag)
		ret[0] = '-';
	return (ret);
}

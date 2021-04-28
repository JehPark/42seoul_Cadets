/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:01:32 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 15:53:11 by jehpark          ###   ########.fr       */
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
	ret = (char *)malloc(sizeof(char) * (flag + len + 1));
	ret += flag + len;
	*ret-- = '\0';
	nbr = (long)n * (long)(flag == 1 ? -1 : 1);
	while (len)
	{
		if (nbr / 10)
			*ret-- = (nbr % 10) + '0';
		else
			*ret = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	if (flag)
		*--ret = '-';
	return (ret);
}

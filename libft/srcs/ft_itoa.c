/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:01:32 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 09:40:20 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;
	int		flag;

	len = ft_intdigit(n);
	flag = n < 0 ? 1 : 0;
	ret = (char *)malloc(sizeof(char) * (flag + len + 1));
	ret += flag + len + 1;
	*ret = '\0';
	ret--;
	n *= flag == 1 ? -1 : 1;
	while (n)
	{
		if (n / 10)
			*ret-- = (n % 10) + '0';
		else
			*ret = (n % 10) + '0';
		n /= 10;
	}
	if (flag)
	{
		ret--;
		*ret = '-';
	}
	return (ret);
}

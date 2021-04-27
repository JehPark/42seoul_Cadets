/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:40:50 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 08:06:31 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned char	*rear;
	unsigned char	*front;
	unsigned char	*ret;
	unsigned char	*temp;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	front = s;
	while (*s)
		s++;
	s--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s--;
	rear = s;
	ret = (unsigned char *)malloc(rear - front + 2);
	temp = ret;
	while (front != rear)
		*temp++ = *front++;
	*temp = '\0';
	return (ret);
}

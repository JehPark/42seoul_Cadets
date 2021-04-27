/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 07:40:50 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 11:03:24 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*rear;
	char	*front;
	char	*ret;
	char	*temp;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	front = (char *)s;
	while (*s)
		s++;
	s--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s--;
	rear = (char *)s;
	ret = (char *)malloc(rear - front + 2);
	temp = ret;
	while (front != rear + 1)
		*temp++ = *front++;
	*temp = '\0';
	return (ret);
}

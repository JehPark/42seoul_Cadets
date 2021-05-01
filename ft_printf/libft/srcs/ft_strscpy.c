/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:42:49 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/27 10:48:14 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strscpy(char *word, char *start, char const *end)
{
	char	*temp;

	temp = word;
	while (start != end)
	{
		*temp = *start;
		temp++;
		start++;
	}
	*temp = '\0';
}

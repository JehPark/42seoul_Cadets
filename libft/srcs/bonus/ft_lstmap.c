/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:28:42 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 15:50:30 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*prev;
	t_list	*ans;
	int		flag;

	ret = ft_lstnew(NULL);
	flag = 1;
	while (lst)
	{
		prev = ft_lstnew(lst->content);
		if (flag)
		{
			ret->next = prev;
			flag = 0;
		}
		(*f)(prev->content);
		prev = prev->next;
		lst = lst->next;
	}
	ans = ret->next;
	ft_lstdelone(ret, del);
	return (ans);
}

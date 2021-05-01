/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:28:42 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/29 16:34:10 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*temp;

	if (!lst)
		return (NULL);
	ans = ft_lstnew(f(lst->content));
	if (!ans)
		return (NULL);
	temp = ans;
	while (lst)
	{
		if (lst->next)
		{
			temp->next = ft_lstnew(f(lst->next->content));
			if (!(temp->next))
			{
				ft_lstclear(&temp, del);
				return (NULL);
			}
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (ans);
}

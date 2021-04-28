/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 08:07:41 by jehpark           #+#    #+#             */
/*   Updated: 2021/04/28 08:42:10 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cur;
	t_list	*next;
	t_list	*pre;

	pre = ft_lstnew(NULL, 0);
	if (!lst || pre)
		return NULL;
	cur = lst;
	pre = cur;
	while (cur)
	{
		next = cur->next;
		cur = ft_lstnew(cur->content, cur->content_size);
		if (!cur)
			return (NULL);
		cur = (*f)(cur);
		cur = next;
	}
	return (pre);
}
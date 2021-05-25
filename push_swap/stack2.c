/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:06:35 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/16 20:25:31 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pop(t_node **root)
{
    t_node *temp;
    int ret;

    if (isEmpty(*root))
        return (-2147483648);
    temp = *root;
    ret = (temp->data)[temp->top];
    (temp->data)[temp->top] = -1;
    temp->top--;
    return (ret);
}

int peek(t_node *root)
{
    if (isEmpty(root))
        return (-2147483648);
    return ((root->data)[root->top]);
}

int peeklast(t_node *root)
{
    if (isEmpty(root))
        return (-2147483648);
    return ((root->data)[0]);
}

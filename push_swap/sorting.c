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

int quicksort(t_node **a_stack, t_node **b_stack, int size, int flag)
{
    int part;

    if (size < 6)
    {
        realsort(a_stack, size, flag);
    }
    else
    {
        part = partition(a_stack, b_stack, size, flag);
        quicksort(a_stack, b_stack, size - part, 1);
        quicksort(b_stack, a_stack, part, 0);
    }
}

int partition(t_node **a_stack, t_node **b_stack, int size, int flag)
{
    int ret;
    int target;

    ret = 0;
    if (issorted(a_stack, flag, size))
        return (ret);
    target = (*a_stack->data)[*a_stack->top - size / 2];
    while (size--)
        ret += divide(a_stack, b_stack, flag);
    return (ret);
}

int divide(t_node **a_stack, t_node **b_stack, int flag)
{
}

int issorted(t_node **root, int flag, int size)
{
    t_node *tmp;
    int i;

    tmp = *root;
    i = tmp->top;
    if (flag)
    {
        while (i > tmp->top - size)
            if ((tmp->data)[i - 1] < (tmp->data)[i--])
                return (0);
    }
    else
    {
        while (i > tmp->top - size)
            if ((tmp->data)[i - 1] > (tmp->data)[i--])
                return (0);
    }
    return (1);
}
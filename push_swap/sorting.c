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

void quicksort(t_node **a_stack, t_node **b_stack, int size, int flag)
{
    int part;
    if (size < 2)
        return;
    if (size < 4)
    {
        realsort(a_stack, size, flag);
    }
    part = partition(a_stack, b_stack, size, flag);
    quicksort(a_stack, b_stack, size - part, 1);
    quicksort(b_stack, a_stack, part, 0);
    while (!(isEmpty(b_stack)))
        move(b_stack, a_stack, 0);
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
    {
        if (divide(a_stack, b_stack, flag, target))
            ret++;
        else
            rotate(a_stack, flag);
    }
    return (ret);
}

int divide(t_node **a_stack, t_node **b_stack, int flag, int stand)
{
    if (stand > peek(a_stack))
    {
        move(a_stack, b_stack, flag);
        return (1);
    }
    else if (stand > peeklast(a_stack))
    {
        rev_rotate(a_stack, flag);
        move(a_stack, b_stack, flag);
        return (1);
    }
    else
        return (0);
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
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

int quicksort(t_node **s1, t_node **s2, int start, int end)
{
    int part;

    if (start < end)
    {
        part = partition(s1, s2, end);
        quicksort(s1, s2, start, part - 1);
        quicksort(s2, s1, part + 1, end);
    }
}

int partition(t_node **s1, t_node **s2, int idx)
{
    int stand;
    t_node tmp;
    int ret;

    tmp = *s1;
    while (idx)
    {
        tmp = tmp->next;
        idx--;
    }
    stand = tmp->data;
    ret = 0;
    while (tmp)
    {
        if (*s1->data >= stand)
            move(s1, s2, 1);
        else
        {
            rotate(s1, 1);
            ret++;
        }
    }
    return (ret);
}

int issorted(t_node **root)
{
    int tmp;
    t_node *cur;

    tmp = *root->data;
    cur = *root->next;
    while (*root)
    {
        if (tmp > cur->data)
            return (0);
        cur = cur->next;
    }
    return (1);
}

int isrotate(t_node **root)
{
    rotate(root);
    if (issorted(root))
        return (1);
    rev_rotate(root);
    return (0);
}

int isrevrotate(t_node **root)
{
    rev_rotate(root);
    if (issorted(root))
        return (1);
    rev_rotate(root);
    return (0);
}
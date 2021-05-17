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

int swap(t_node **root)
{
    int nbr1;
    int nbr2;

    if (!*root || !((*root)->next))
        return (0);
    nbr1 = pop(root);
    nbr2 = pop(root);
    push(root, nbr1);
    push(root, nbr2);
    return (1);
}

int move(t_node **r1, t_node **r2)
{
    int nbr;

    if (!*r1)
        return (0);
    nbr = pop(r1);
    push(r2, nbr);
    return (1);
}

int bottom_up(t_node **root)
{
    t_node *prev;
    t_node *cur;

    if (!*root)
        return (0);
    prev = *root;
    cur = prev->next;
    prev->next = NULL;
    while (cur)
    {
        cur->next = prev;
        prev->next = NULL;
        prev = cur;
        cur = cur->next;
    }
    return (1);
}

int rotate(t_node **root)
{
    t_node *last;
    t_node *first;

    if (!*root || !(*root)->next)
        return (0);
    last = last(root);
    first = *root;
    *root = *root->next;
    first->next = NULL;
    last->next = first;
    return (1);
}

int rev_rotate(t_node **root)
{
    t_node *last_prev;
    t_node *first;
    t_node *last;

    if (!*root || !(*root->next))
        return (0);
    last_prev = last_prev(root);
    first = *root;
    last = last_prev->next;
    last_prev->next = NULL;
    last->next = first;
    *root = last;
    return (1);
}
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

int swap(t_node **root, int flag)
{
    int nbr1;
    int nbr2;

    if (!*root || !((*root)->next))
        return (0);
    nbr1 = pop(root);
    nbr2 = pop(root);
    push(root, nbr1);
    push(root, nbr2);
    if (flag == 1)
        write(1, "sa\n", 3);
    else
        write(1, "sb\n", 3);
    return (1);
}

int move(t_node **r1, t_node **r2, int flag)
{
    int nbr;

    if (!*r1)
        return (0);
    nbr = pop(r1);
    push(r2, nbr);
    if (flag == 1)
        write(1, "pa\n", 3);
    else
        write(1, "pb\n", 3);
    return (1);
}

int rotate(t_node **root, int flag)
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
    if (flag == 1)
        write(1, "ra\n", 3);
    else
        write(1, "rb\n", 3);
    return (1);
}

int rev_rotate(t_node **root, int flag)
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
    if (flag == 1)
        write(1, "rra\n", 4);
    else
        write(1, "rrb\n", 4);
    return (1);
}
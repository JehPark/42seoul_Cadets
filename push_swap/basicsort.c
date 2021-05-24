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

void realsort(t_node **root, int size, int flag)
{
    if (issorted(root, flag, size))
        return;
    if (size == 2)
        swap(root, flag);
    else if (size == 3)
        sizethreesort(root, flag);
}

void sizethreesort(t_node **root, int flag)
{
    int first;
    int second;
    int third;

    first = *root->data[*root->top];
    second = *root->data[*root->top - 1];
    third = *root->data[*root->top - 2];
    if (flag == 1)
        ascending(root, first, second, third);
    else
        descending(root, first, second, third);
}

void ascending(t_node **root, int first, int second, int third)
{
    int max;
    int min;
    int mid;

    max = findmax(first, second, third);
    min = findmin(first, second, third);
    mid = findmid(first, second, third);
    if (mid == first && min == second && max == third)
        swap(root, 1);
    else if (max == first && min == second && third == mid)
        rotate(root, 1);
    else if (mid == first && max == second && third == min)
        rev_rotate(root, 1);
    else if (max == first && mid == second && third == min)
    {
        swap(root, 1);
        rev_rotate(root, 1);
    }
    else if (min == first && min == second && mid == third)
    {
        swap(root, 1);
        rotate(root, 1);
    }
}

void descending(t_node **root, int first, int second, int third)
{
    int max;
    int min;
    int mid;

    max = findmax(first, second, third);
    min = findmin(first, second, third);
    mid = findmid(first, second, third);
    if (mid == first && min == second && max == third)
        rev_rotate(root, 0);
    else if (min == first && max == second && mid == third)
        rotate(root, 0);
    else if (mid == first && max == second && min == third)
        swap(root, 0);
    else if (min == first && mid == second && max == third)
    {
        swap(root, 0);
        rev_rotate(root, 0);
    }
    else if (max == first && min == second && mid == third)
    {
        swap(root, 0);
        rotate(root, 0);
    }
}
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

int *changestr(char **argv, int size)
{
    int *data;
    int i;

    data = (int *)malloc(sizeof(int) * size * 2);
    i = 0;
    while (i < size)
    {
        data[i] = ft_atoi(argv[i]);
        i++;
    }
    return (data);
}

void putstack(t_node **root, char **argv, int size)
{
    int *arr;

    *root->data = changestr(argv, size);
    *root->size = 2 * size;
    *root->top = size - 1;
}

int main(int argc, char **argv)
{
    t_node *a_stack;
    t_node *b_stack;

    putzeros(&a_stack);
    putzeros(&b_stack);
    if (argc > 1)
    {
        putstack(&a_stack, ++argv, --argc);
        if (errorcheck(argv, argc))
            write(1, "Error\n", 6);
        quicksort(&a_stack, &b_stack, argc, 1);
    }
    else
        write(1, "Error\n", 6);
    return (0);
}
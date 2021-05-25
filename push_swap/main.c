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

int putstack(t_node **root, char **argv, int size)
{
}

int main(int argc, char **argv)
{
    t_node *a_stack;
    t_node *b_stack;
    int size;

    size = 0;
    if (argc > 1)
    {
        size += putstack(&a_stack, ++argv, --argc);
        if (size == -1)
            write(1, "Error\n", 6);
        else
            quicksort(&a_stack, &b_stack, size, 1);
    }
    else
        write(1, "Error\n", 6);
    return (0);
}
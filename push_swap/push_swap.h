/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:08:31 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/16 20:10:20 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_node
{
	int *data;
	int size;
	int top;
} t_node;

#include <unistd.h>
#include <stdlib.h>

t_node newNode(int data);
int isEmpty(t_node *root);
void push(t_node **root, int data);
int pop(t_node **root);
int peek(t_node *root);
int swap(t_node **root);

#endif

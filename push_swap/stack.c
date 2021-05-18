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

t_node *nodeinit(int *data, int size)
{
	t_node *new_node;
	int i;

	new_node->data = (int *)malloc(sizeof(int) * size * 2);
	new_node->size = size * 2;
	i = 0;
	while (i < size)
	{
		(new_node->data)[i] = data[i];
		i++;
	}
	new_node->top = i - 1;
	return (new_node);
}

int isEmpty(t_node *root)
{
	return (root->top);
}

void push(t_node **root, int data)
{
	t_node *ret;

	ret = *root;
	if (*root->top > size * 3 / 4)
	{
		ret = nodeinit(*root->data, root->size);
		free(root->data);
		*root->data = ret->data;
		ret = *root;
	}
	(ret->data)[ret->top + 1] = data;
	ret->top++;
}

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

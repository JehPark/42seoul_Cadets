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

t_node newNode(int data)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(struct t_node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int isEmpty(t_node *root)
{
	return (!root);
}

void push(t_node **root, int data)
{
	t_node node;

	node = newNode(data);
	node->next = *root;
	*root = stackNode;
}

int pop(t_node **root)
{
	t_node *temp;
	int ret;

	if (isEmpty(*root))
		return (-2147483648);
	temp = *root;
	*root = (*root)->next;
	ret = temp->data;
	free(temp);
	return (ret);
}

int peek(t_node *root)
{
	if (isEmpty(root))
		return (-2147483648);
	return (root->data);
}

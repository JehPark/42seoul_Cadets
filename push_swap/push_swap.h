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

//ft_behavior.c
int swap(t_node **root, int flag);
int move(t_node **r1, t_node **r2, int flag);
int rotate(t_node **root, int flag);
int rev_rotate(t_node **root, int flag);

// main.c
int *changestr(char **argv, int size);
void putstack(t_node **root, char **argv, int size);

//basicsort.c
void realsort(t_node **root, int size, int flag);
void sizethreesort(t_node **root, int flag);
void ascending(t_node **root, int first, int second, int third);
void descending(t_node **root, int first, int second, int third);

//sorting.c
void quicksort(t_node **a_stack, t_node **b_stack, int size, int flag);
int partition(t_node **a_stack, t_node **b_stack, int size, int flag);
int divide(t_node **a_stack, t_node **b_stack, int flag, int stand);
int issorted(t_node **root, int flag, int size);

//stack.c
t_node *nodeinit(int *data, int size);
int isEmpty(t_node *root);
void push(t_node **root, int data);
int pop(t_node **root);
int peek(t_node *root);
int peeklast(t_node *root);

//utils.c
t_node *last(t_node **root);
t_node *last_prev(t_node **root);
int ft_isspace(char ch);
int ft_atoi(char *nbr);
int findmax(int first, int second, int third);
int findmin(int first, int second, int third);
int findmid(int first, int second, int third);
void putzeros(t_node **root);
int errorcheck(char **strs, int size);

#endif

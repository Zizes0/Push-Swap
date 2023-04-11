/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help1_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:08:42 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 09:43:57 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_stack *mystack, int val)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (newnode == NULL)
		return ;
	newnode->next = *mystack;
	newnode->val = val ;
	*mystack = newnode;
}

void	add_front(t_stack *a, t_node *tmp)
{
	t_node	*tmp1;

	tmp1 = *a;
	*a = tmp;
	(*a)->next = tmp1;
}

int	isempty(t_stack *s)
{
	if (*s == NULL)
		return (0);
	return (1);
}

t_node	*peek(t_stack *mystack)
{
	t_node	*tmp;

	tmp = *mystack;
	*mystack = (*mystack)->next;
	return (tmp);
}

t_node	*last_node(t_stack *mystack)
{
	t_node	*t;

	t = *mystack;
	while (t->next != NULL)
		t = t->next;
	return (t);
}

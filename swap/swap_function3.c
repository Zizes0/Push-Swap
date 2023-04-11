/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:38:51 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 18:43:28 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *a, t_stack *b)
{
	sb(b);
	sa(a);
	write(1, "ss\n", 3);
}

void	ra(t_stack *a)
{
	t_node	*tmp;

	tmp = last_node(a);
	tmp->next = *a;
	*a = (*a)->next;
	tmp->next->next = NULL;
	write(1, "ra\n", 3);
}

t_node	*prev_last_node(t_stack *mystack)
{
	t_node	*t;

	t = *mystack;
	while (t->next->next != NULL)
		t = t->next;
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:37:58 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/25 11:11:01 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	tmp3 = *a;
	tmp1 = (*a)->next->next;
	tmp2 = (*a)->next;
	(*a)->next = (*a)->next->next;
	(*a) = tmp2;
	(*a)->next = tmp3;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	tmp3 = *b;
	tmp1 = (*b)->next->next;
	tmp2 = (*b)->next;
	(*b)->next = (*b)->next->next;
	(*b) = tmp2;
	(*b)->next = tmp3;
	write(1, "sb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = peek(b);
	add_front(a, tmp);
	write(1, "pa\n", 3);
}

void	pb(t_stack *b, t_stack *a)
{
	t_node	*tmp;

	tmp = peek(a);
	add_front(b, tmp);
	write(1, "pb\n", 3);
}

void	rb(t_stack *b)
{
	t_node	*tmp;

	tmp = last_node(b);
	tmp->next = *b;
	*b = (*b)->next;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}

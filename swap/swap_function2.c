/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:38:24 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/24 18:38:25 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	tmp1 = prev_last_node(a);
	tmp2 = tmp1->next;
	tmp1->next = NULL;
	tmp3 = *a;
	*a = tmp2 ;
	(*a)->next = tmp3;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	tmp1 = prev_last_node(b);
	tmp2 = tmp1->next;
	tmp1->next = NULL;
	tmp3 = *b;
	*b = tmp2;
	(*b)->next = tmp3;
	write(1, "rrb\n", 4);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:08:57 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 10:17:29 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stack *a)
{
	t_node	*tmp;

	if (len_stack(*a) < 2)
		return ;
	tmp = last_node(a);
	tmp->next = *a;
	*a = (*a)->next;
	tmp->next->next = NULL;
}

void	rb(t_stack *b)
{
	t_node	*tmp;

	if (len_stack(*b) < 2)
		return ;
	tmp = last_node(b);
	tmp->next = *b;
	*b = (*b)->next;
	tmp->next->next = NULL;
}

void	rra(t_stack *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	if (len_stack(*a) < 2)
		return ;
	tmp1 = prev_last_node(a);
	tmp2 = tmp1->next;
	tmp1->next = NULL;
	tmp3 = *a;
	*a = tmp2 ;
	(*a)->next = tmp3;
}

void	rrb(t_stack *b)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	if (len_stack(*b) < 2)
		return ;
	tmp1 = prev_last_node(b);
	tmp2 = tmp1->next;
	tmp1->next = NULL;
	tmp3 = *b;
	*b = tmp2;
	(*b)->next = tmp3;
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

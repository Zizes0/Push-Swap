/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 08:41:30 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 11:20:21 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_stack *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	if (len_stack(*a) < 2)
		return ;
	tmp3 = *a;
	tmp1 = (*a)->next->next;
	tmp2 = (*a)->next;
	(*a)->next = (*a)->next->next;
	(*a) = tmp2;
	(*a)->next = tmp3;
}

void	sb(t_stack *b)
{
	t_node	*tmp1;
	t_node	*tmp2;
	t_node	*tmp3;

	if (len_stack(*b) < 2)
		return ;
	tmp3 = *b;
	tmp1 = (*b)->next->next;
	tmp2 = (*b)->next;
	(*b)->next = (*b)->next->next;
	(*b) = tmp2;
	(*b)->next = tmp3;
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (*b == NULL)
		return ;
	tmp = peek(b);
	add_front(a, tmp);
}

void	pb(t_stack *b, t_stack *a)
{
	t_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = peek(a);
	add_front(b, tmp);
}

void	ss(t_stack *a, t_stack *b)
{
	sb(b);
	sa(a);
}

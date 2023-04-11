/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:10:24 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/25 09:44:11 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

t_node	*prev_last_node(t_stack *mystack)
{
	t_node	*t;

	t = *mystack;
	while (t->next->next != NULL)
		t = t->next;
	return (t);
}

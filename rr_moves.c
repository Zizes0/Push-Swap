/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:59:54 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:12:11 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate_reverse_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;
	t_stack	*a;

	if (!(*stack_a) || (*stack_a)->next == NULL)
		return ;
	a = *stack_a;
	tmp = ft_beforelast(*stack_a);
	*stack_a = tmp->next;
	tmp->next->next = a;
	tmp->next = 0;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	rotate_reverse_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;
	t_stack	*a;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	a = *stack_b;
	tmp = ft_beforelast(*stack_b);
	*stack_b = tmp->next;
	tmp->next->next = a;
	tmp->next = 0;
	if (i == 0)
		write(1, "rrb\n", 4);
}

void	rotate_reverse_ab(t_stack **stack_a, t_stack **stack_b, int i)
{
	rotate_reverse_a(stack_a, 1);
	rotate_reverse_b(stack_b, 1);
	if (i == 0)
		write(1, "rrr\n", 4);
}

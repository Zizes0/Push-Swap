/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:54:27 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 00:32:18 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_beforelast(t_stack *lst)
{
	while (lst)
	{
		if (!lst->next->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	rotate_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if (!(*stack_a) || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	ft_lstlast(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	ft_lstlast(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b, int i)
{
	rotate_a(stack_a, 1);
	rotate_b(stack_b, 1);
	if (i == 0)
		write(1, "rr\n", 3);
}

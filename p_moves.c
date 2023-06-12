/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:39:01 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 21:40:43 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_a(t_stack **sta, t_stack **stb, int i)
{
	t_stack	*tmp;

	if (!(*stb))
		return ;
	tmp = (*stb);
	(*stb) = (*stb)->next;
	tmp->next = NULL;
	ft_lstadd_front(sta, tmp);
	if (i == 0)
		write(1, "pa\n", 3);
}

void	push_b(t_stack **sta, t_stack **stb, int i)
{
	t_stack	*tmp;

	if (ft_lstsize(*sta) == 0)
		return ;
	tmp = (*sta);
	(*sta) = (*sta)->next;
	tmp->next = NULL;
	ft_lstadd_front(stb, tmp);
	if (i == 0)
		write(1, "pb\n", 3);
}

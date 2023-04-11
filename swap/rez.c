/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rez.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:33:33 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/24 18:33:34 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_number(t_stack a, int *position, int *len)
{
	int	number;
	int	i;

	i = 0 ;
	number = a->val;
	while (a != NULL)
	{
		if (number > a->val)
		{
			*position = i;
			number = a->val;
		}
		a = a->next ;
		*len += 1;
		i++;
	}
	return (number);
}

void	push_min_number(t_stack *a, t_stack *b, int lens)
{
	int	number;
	int	position;
	int	len ;
	int	i ;

	i = 0;
	while (i < lens)
	{
		position = 0 ;
		len = 0;
		number = min_number(*a, &position, &len);
		if (position >= len / 2)
		{
			while ((*a)->val != number)
				rra(a);
		}
		else
		{
			while ((*a)->val != number)
				ra(a);
		}
		pb(b, a);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smell_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:34:07 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 15:41:27 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smell_number(t_stack *a, t_stack *b, int len)
{
	int	j;

	j = len - 3;
	if (len == 2)
		sa(a);
	else
	{
		push_min_number(a, b, j);
		push_swap_three(a);
		while (isempty(b))
			pa(a, b);
	}
}

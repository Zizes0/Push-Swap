/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help2_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:09:11 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 15:24:20 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	file_stack(t_stack *a, int array[], int len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		push(a, array[i]);
		i--;
	}
	free(array);
}

int	len_stack(t_stack a)
{
	int	i;

	i = 0;
	while (a != 0)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	position(t_stack a, int number, int *index)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		if (a->val <= number)
		{
			*index = i;
			return (a->val);
		}
		a = a->next;
		i++;
	}
	*index = -1;
	return (0);
}

int	find_max(t_stack a, int *index, int min)
{
	int	number;
	int	i;

	number = min - 1;
	i = 0 ;
	while (a != NULL)
	{
		if (a->val > number)
		{
			*index = i ;
			number = a->val;
		}
		a = a->next;
		i++;
	}
	return (number);
}

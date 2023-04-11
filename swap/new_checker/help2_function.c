/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help2_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:09:11 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 11:31:31 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:14:59 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 18:31:34 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_stack *a, t_stack *b, int sort[])
{
	int	number;
	int	index;
	int	i;

	number = 0;
	index = 0;
	i = 0;
	while (isempty(a))
	{
		number = position(*a, sort[i], &index);
		if (index == -1)
			i++;
		else
		{
			if (index >= len_stack(*a) / 2)
				while ((*a)->val != number)
					rra(a);
			else
				while ((*a)->val != number)
					ra(a);
			pb(b, a);
		}
	}
}

void	push_swap(t_stack *a, t_stack *b, int sort[], int min)
{
	int	number;
	int	index;
	int	i;

	number = 0;
	index = 0;
	i = 0;
	a_to_b(a, b, sort);
	while (isempty(b))
	{
		number = find_max(*b, &index, min);
		if (index >= len_stack(*b) / 2)
			while ((*b)->val != number)
				rrb(b);
		else
			while ((*b)->val != number)
				rb(b);
		pa(a, b);
	}
}

void	freemm1(t_stack *a)
{
	t_stack	tmp;

	while (*a != NULL)
	{
		tmp = *a;
		(*a) = (*a)->next;
		free(tmp);
	}
}

void	to_push(t_stack *a, t_stack *b, int *arr, int min)
{
	int	len;

	len = len_stack(*a);
	if (len < 10)
		smell_number(a, b, len);
	else
		push_swap(a, b, arr, min);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		*arr;
	int		len;
	int		*g;

	len = 0;
	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	argv = all_arg(argv);
	len = len2d(argv);
	if (check_all(&arr, argv) == 1)
		return (write(2, "Error\n", 6));
	g = array_to_chuncks(arr, len, &argc);
	file_stack(&a, arr, len);
	to_push(&a, &b, g, argc);
	freemm1(&a);
	free(g);
}

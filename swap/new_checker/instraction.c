/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:31:54 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 11:33:52 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *str1, char *str2)
{
	size_t			i;

	i = 0;
	while ((*(str1 + i) || *(str2 + i)) && (*(str1 + i) == *(str2 + i)))
		i++;
	return (*(str1 + i) - *(str2 + i));
}

void	app_instraction(char *arr, t_stack *a, t_stack *b)
{
	if (ft_strcmp(arr, "sa") == 0)
		sa(a);
	else if (ft_strcmp(arr, "sb") == 0)
		sb(b);
	else if (ft_strcmp(arr, "ss") == 0)
		ss(a, b);
	else if (ft_strcmp(arr, "pa") == 0)
		pa(a, b);
	else if (ft_strcmp(arr, "pb") == 0)
		pb(b, a);
	else if (ft_strcmp(arr, "ra") == 0)
		ra(a);
	else if (ft_strcmp(arr, "rb") == 0)
		rb(b);
	else if (ft_strcmp(arr, "rr") == 0)
		rr(a, b);
	else if (ft_strcmp(arr, "rra") == 0)
		rra(a);
	else if (ft_strcmp(arr, "rrb") == 0)
		rrb(b);
	else if (ft_strcmp(arr, "rrr") == 0)
		rrr(a, b);
	else
		exit(write(2, "Error\n", 6));
	free(arr);
}

void	instraction(t_stack *a, t_stack *b)
{
	char	*arr;

	arr = get_next_line(0);
	while (arr != NULL)
	{
		app_instraction(arr, a, b);
		arr = get_next_line(0);
	}
}

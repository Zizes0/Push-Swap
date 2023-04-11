/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_issort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:21:33 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/31 11:41:01 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	issort(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] > array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_issort(t_stack a, t_stack *b, int len)
{
	int	*arr;
	int	i;

	i = 0;
	if (isempty(b) == 1)
		exit(write(1, "ko\n", 3));
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return ;
	while (i < len)
	{
		arr[i++] = a->val;
		a = a->next;
	}
	if (issort(arr, len) == 1)
		write(1, "ko\n", 3);
	else
		write(1, "ok\n", 3);
	free(arr);
}

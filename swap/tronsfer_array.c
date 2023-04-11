/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tronsfer_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:39:43 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 18:42:52 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len2d(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return (0);
	while (array[i])
		i++;
	return (i);
}

int	*tronsfer_array(char **array, int argc, int *d)
{
	int	i;
	int	*arr;
	int	j;

	i = 0;
	arr = malloc(sizeof(int) * argc + 1);
	if (!arr)
		return (0);
	j = 0;
	while (array[i])
	{
		arr[j] = ft_atoi(array[i], d);
		i++;
		j++;
	}
	return (arr);
}

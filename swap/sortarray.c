/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortarray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:34:41 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 12:30:21 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple(int *sort, int len, int i, int *issort)
{
	int	tmp;
	int	j;

	j = i + 1;
	while (j < len)
	{
		if (sort[i] > sort[j])
		{
			tmp = sort[i];
			sort[i] = sort[j];
			sort[j] = tmp;
			*issort += 1;
		}
		j++;
	}
}

int	*sortarray(int *a, int len, int *issort)
{
	int	i;
	int	*sort;

	sort = malloc(sizeof(int) * len);
	if (!sort)
		return (0);
	i = 0 ;
	while (i < len)
	{
		sort[i] = a[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		simple(sort, len, i, issort);
		i++;
	}
	return (sort);
}

int	*file_array(int *array, int r)
{
	int	*a;
	int	len;
	int	offset;
	int	i;

	if (r > 150)
		len = 10;
	else
		len = 5;
	a = malloc(sizeof(int) * len);
	if (!a)
		return (NULL);
	offset = r / len;
	i = 0;
	while (i < len - 1)
	{
		a[i] = array[offset];
		offset += r / len ;
		i++;
	}
	a[i] = array[r - 1];
	return (a);
}

int	*array_to_chuncks(int *arr, int len, int *min)
{
	int	issort ;
	int	*sort;
	int	*g;

	issort = 0;
	sort = sortarray(arr, len, &issort);
	if (issort == 0)
	{
		free(sort);
		exit(0);
	}
	*min = sort[0];
	g = file_array(sort, len);
	free(sort);
	return (g);
}

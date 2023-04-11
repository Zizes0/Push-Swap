/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:06:27 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 09:34:51 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	freemem(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(array[i++]);
	}
	free(array);
	array = NULL ;
	return (1);
}

int	check_all(int **arr, char **array)
{
	int	j;
	int	len;

	j = 0;
	len = len2d(array);
	if (check_arg(array) == 1)
		return (1);
	*arr = tronsfer_array(array, len, &j);
	freemem(array, len);
	if (j != 0)
	{
		free(*arr);
		return (1);
	}
	j = check_dup(*arr, len);
	if (j != 0)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:07:07 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 09:34:56 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_arg(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = 0;
		if (array[i][j] == '-')
			j++;
		while (array[i][j])
		{
			if (array[i][j] < '0' || array[i][j] > '9')
				return (1);
			j++;
		}
		if (j == 0)
			return (1);
		i++;
	}
	return (0);
}

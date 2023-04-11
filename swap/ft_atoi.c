/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:08:05 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 18:45:10 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	llm(char const *str, int i, int sin, int *d)
{
	int		j;
	long	result;

	j = i;
	result = 0;
	while ((*(str + j) >= 48) && (*(str + j) <= 57))
	{
		result = result * 10;
		result += *(str + j) - '0';
		j++;
		if (sin > 0)
		{
			if ((result > 2147483647))
				return (*d += 1);
		}
		else
		{
			if (result > 2147483648)
				return (*d += 1);
		}
	}
	if (j == i)
		*d += 1;
	return (result * sin);
}

int	ft_atoi(const char *str, int *d)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while ((*(str + i) == 32) || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == '-')
	{
		s = -1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	return (llm(str, i, s, d));
}

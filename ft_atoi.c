/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:26:13 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 03:12:01 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_overflow(long int old, long int result)
{
	if (result / 10 != old)
		return (1);
	return (0);
}

void	ft_check(char *str, int *i, int *sign)
{
	while (str[*i] && (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13)))
		*i += 1;
	if (str[*i] && (str[*i] == '-' || str[*i] == '+'))
	{
		if (str[*i] == '-')
			*sign *= -1;
		*i += 1;
	}
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	result;
	long int	old;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	ft_check((char *)str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		old = result;
		result = result * 10 + str[i++] - '0';
		if (ft_overflow(old, result) == 1)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	if (result > 2147483647 || result < -2147483648)
		ft_error("Error");
	return (result * sign);
}

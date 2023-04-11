/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:21:04 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 13:12:35 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		*arr;
	int		len;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	argv = all_arg(argv);
	len = len2d(argv);
	if (check_all(&arr, argv) == 1)
		return (write(2, "Error\n", 6));
	file_stack(&a, arr, len);
	instraction(&a, &b);
	check_issort(a, &b, len);
}

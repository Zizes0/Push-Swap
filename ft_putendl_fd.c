/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:41:20 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 01:55:57 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*p;

	if (!s)
		return ;
	p = (char *)s;
	ft_putstr_fd(p, fd);
	ft_putchar_fd('\n', fd);
}

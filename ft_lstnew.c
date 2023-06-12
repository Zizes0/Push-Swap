/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:11:55 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 01:55:50 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_lstnew(int content, int i)
{
	t_stack		*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->num = content;
	node->index = i;
	node->next = NULL;
	return (node);
}

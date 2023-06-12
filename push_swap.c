/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:34:17 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 00:53:56 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = stack;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = NULL;
		head = tmp;
	}
}

int	ft_is_sort(t_stack **sta)
{
	int		size;
	int		max;
	int		i;
	t_stack	*tmp;

	tmp = *sta;
	size = ft_lstsize(tmp) - 1;
	i = 0;
	max = tmp->num;
	while (tmp)
	{
		if (max < tmp->num)
		{
			max = tmp->num;
			i++;
		}
		tmp = tmp->next;
	}
	if (i != size)
		return (1);
	return (0);
}

void	indexing_stack(t_stack **stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = ft_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = ft_next_min(stack);
	}
}

t_stack	*ft_ajout_to_stack(char **arg)
{
	int		i;
	char	*str;
	char	**s;
	t_stack	*ret;

	i = 1;
	ret = NULL;
	str = NULL;
	while (arg[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, arg[i]);
		i++;
	}
	s = ft_split(str, ' ');
	i = 0;
	while (s[i])
	{
		ft_lstadd_back(&ret, ft_lstnew(ft_atoi(s[i]), -1));
		i++;
	}
	free(str);
	ft_free(s);
	return (ret);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	arg_check(argc, argv);
	stack_a = ft_ajout_to_stack(argv);
	size = ft_lstsize(stack_a);
	if (ft_is_sort(&stack_a) == 0)
		exit(0);
	if (size == 2)
		swap_a(&stack_a, 0);
	else if (size == 3)
		ft_3_sort(&stack_a);
	else if (size == 4)
		ft_4_sort(&stack_a, &stack_b);
	else if (size == 5)
		ft_5_sort(&stack_a, &stack_b);
	else
		sort_huge(&stack_a, &stack_b);
	exit(0);
}

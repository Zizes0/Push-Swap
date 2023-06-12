/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:49:18 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:23:56 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_sort(t_stack *sta)
{
	int	size;
	int	max;
	int	i;

	size = ft_lstsize(sta) - 1;
	i = 0;
	max = sta->num;
	while (sta)
	{
		if (max < sta->num)
		{
			max = sta->num;
			i++;
		}
		sta = sta->next;
	}
	if (i != size)
		return (1);
	return (0);
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

int	valid_move(char *line)
{
	if (strcmp(line, "ra\n") == 0 || strcmp(line, "rb\n") == 0 || strcmp(line,
			"rr\n") == 0)
		return (1);
	else if (strcmp(line, "sa\n") == 0 || strcmp(line, "sb\n") == 0
		|| strcmp(line, "ss\n") == 0)
		return (1);
	else if (strcmp(line, "pa\n") == 0 || strcmp(line, "pb\n") == 0)
		return (1);
	else if (strcmp(line, "rra\n") == 0 || strcmp(line, "rrb\n") == 0
		|| strcmp(line, "rrr\n") == 0)
		return (1);
	return (0);
}

void	do_move(char *move, t_stack **stack_a, t_stack **stack_b)
{
	if (strcmp(move, "ra\n") == 0)
		rotate_a(stack_a, 1);
	else if (strcmp(move, "rb\n") == 0)
		rotate_b(stack_b, 1);
	else if (strcmp(move, "rr\n") == 0)
		rotate_ab(stack_a, stack_b, 1);
	else if (strcmp(move, "sa\n") == 0)
		swap_a(stack_a, 1);
	else if (strcmp(move, "sb\n") == 0)
		swap_b(stack_b, 1);
	else if (strcmp(move, "ss\n") == 0)
		swap_s(stack_a, stack_b, 1);
	else if (strcmp(move, "pa\n") == 0)
		push_a(stack_a, stack_b, 1);
	else if (strcmp(move, "pb\n") == 0)
		push_b(stack_a, stack_b, 1);
	else if (strcmp(move, "rra\n") == 0)
		rotate_reverse_a(stack_a, 1);
	else if (strcmp(move, "rrb\n") == 0)
		rotate_reverse_b(stack_b, 1);
	else if (strcmp(move, "rrr\n") == 0)
		rotate_reverse_ab(stack_a, stack_b, 1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;
	int		i;

	i = 0;
	if (argc < 2)
		return (0);
	arg_check(argc, argv);
	stack_a = ft_ajout_to_stack(argv);
	line = get_next_line(0);
	while (line != NULL)
	{
		free(line);
		if (valid_move(line))
			do_move(line, &stack_a, &stack_b);
		line = get_next_line(0);
	}
	free(line);
	if (ft_is_sort(stack_a) == 0 && ft_lstsize(stack_b) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	exit(0);
}

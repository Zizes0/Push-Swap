/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:47:31 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 18:47:57 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node {
	int			val ;
	struct node	*next ;
}	t_node;
typedef t_node*	t_stack ;
char	**ft_split(char const *s, char c);
char	**all_arg(char **argv);
void	*ft_calloc(size_t nitems, size_t size);
int		check_arg(char **array);
int		check_dup(int *arr, int len);
int		check_all(int **arr, char **array);
int		*tronsfer_array(char **array, int argc, int *d);
int		len2d(char **array);
int		ft_atoi(const char *str, int *d);
int		*array_to_chuncks(int *arr, int len, int *min);
void	file_stack(t_stack *a, int array[], int len);
int		len_stack(t_stack a);
int		position(t_stack a, int number, int *index);
int		find_max(t_stack a, int *index, int min);
void	push(t_stack *mystack, int val);
void	add_front(t_stack *a, t_node *tmp);
int		isempty(t_stack *s);
t_node	*peek(t_stack *mystack);
t_node	*last_node(t_stack *mystack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);
void	rb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
t_node	*prev_last_node(t_stack *mystack);
void	smell_number(t_stack *a, t_stack *b, int len);
void	push_min_number(t_stack *a, t_stack *b, int lens);
void	push_swap_three(t_stack *a);

#endif
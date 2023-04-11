/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:36:53 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/28 11:37:16 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

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
int		*tronsfer_array(char **array, int argc, int *d);
int		len2d(char **array);
int		ft_atoi(const char *str, int *d);
int		check_all(int **arr, char **array);
int		check_arg(char **array);
int		check_dup(int *arr, int len);
void	file_stack(t_stack *a, int array[], int len);
int		len_stack(t_stack a);
void	push(t_stack *mystack, int val);
void	add_front(t_stack *a, t_node *tmp);
int		isempty(t_stack *s);
t_node	*peek(t_stack *mystack);
t_node	*last_node(t_stack *mystack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);
t_node	*prev_last_node(t_stack *mystack);
void	instraction(t_stack *a, t_stack *b);
char	*get_next_line(int fd);
size_t	ft_strlen(char *p, char a);
char	*ft_substr(char *s, size_t start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
void	check_issort(t_stack a, t_stack *b, int len);
#endif
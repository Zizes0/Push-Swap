/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:37:49 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:28:18 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				arg_check(int argc, char **argv);
void				ft_free_stack(t_stack *stack);
int					ft_is_sort(t_stack **sta);
void				indexing_stack(t_stack **stack);
t_stack				*ft_ajout_to_stack(char **arg);
int					ft_overflow(long int old, long int result);
void				ft_check(char *str, int *i, int *sign);
int					ft_atoi(const char *str);
int					ft_isdigit(int s);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack				*ft_lstlast(t_stack *lst);
t_stack				*ft_lstnew(int content, int i);
int					ft_lstsize(t_stack *lst);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr_fd(char *s, int fd);
int					nbr_move_check_min(t_stack **sta, int min_next);
void				ft_index(t_stack *stack);
int					get_next_min(t_stack **stack, int index);
void				ft_3_sort(t_stack **stack);
void				ft_4_sort(t_stack **sta, t_stack **stb);
void				ft_5_sort(t_stack **sta, t_stack **stb);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(const char *s);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				getexactlen(size_t sl, unsigned int start, size_t len);
void				push_a(t_stack **sta, t_stack **stb, int i);
void				push_b(t_stack **sta, t_stack **stb, int i);
void				ft_error(char *msg);
int					check_dup(int num, char **argv, int i);
int					ft_isnum(char *num);
void				ft_free(char **str);
void				arg_check(int argc, char **argv);
void				rotate_a(t_stack **stack_a, int i);
void				rotate_b(t_stack **stack_b, int i);
void				rotate_ab(t_stack **stack_a, t_stack **stack_b, int i);
t_stack				*ft_beforelast(t_stack *lst);
void				rotate_reverse_a(t_stack **stack_a, int i);
void				rotate_reverse_b(t_stack **stack_b, int i);
void				rotate_reverse_ab(t_stack **stack_a, t_stack **stack_b,
						int i);
void				swap_a(t_stack **stack_a, int i);
void				swap_b(t_stack **stack_b, int i);
void				swap_s(t_stack **stack_a, t_stack **stack_b, int i);
int					qisma(t_stack **stack_a);
void				sorting_b(t_stack **stack_a, t_stack **stack_b);
void				sort_huge(t_stack **stack_a, t_stack **stack_b);
int					check_max(t_stack *stack);
int					indexing_max(t_stack *stack_b);
t_stack				*ft_next_min(t_stack **stack);
int					ft_isnosorted(t_stack **stack_a, t_stack **stack_b,
						int size, int i);
void				ft_3_check(t_stack **stack);

#endif
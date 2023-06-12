/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:49:55 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:14:12 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "get_next_line/get_next_line.h"
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

void				ft_error(char *msg);
int					check_dup(int num, char **argv, int i);
int					ft_isnum(char *num);
void				ft_free(char **str);
void				arg_check(int argc, char **argv);
int					ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
t_stack				*ft_ajout_to_stack(char **arg);
char				*ft_substr(char const *s, unsigned int start, size_t len);
t_stack				*ft_lstnew(int content, int i);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
char				*ft_strjoin(char *s1, char *s2);
t_stack				*ft_lstlast(t_stack *lst);
int					ft_isdigit(int s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_is_sort(t_stack *sta);
void				swap_a(t_stack **stack_a, int i);
void				swap_b(t_stack **stack_b, int i);
void				swap_s(t_stack **stack_a, t_stack **stack_b, int i);
void				rotate_reverse_a(t_stack **stack_a, int i);
void				rotate_reverse_b(t_stack **stack_b, int i);
void				rotate_reverse_ab(t_stack **stack_a, t_stack **stack_b,
						int i);
t_stack				*ft_beforelast(t_stack *lst);
void				rotate_a(t_stack **stack_a, int i);
void				rotate_b(t_stack **stack_b, int i);
void				rotate_ab(t_stack **stack_a, t_stack **stack_b, int i);
void				push_a(t_stack **sta, t_stack **stb, int i);
void				push_b(t_stack **sta, t_stack **stb, int i);
t_stack				*ft_lstlast(t_stack *lst);
int					ft_lstsize(t_stack *lst);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
void				do_move(char *move, t_stack **stack_a, t_stack **stack_b);
#endif
CC=cc
CFLAGS= -Wall -Werror -Wextra 
AR=ar cr
RM=rm -f
NAME=push_swap
NAME_B=checker

	   
FILES= 	p_moves parsing push_swap r_moves rr_moves s_moves sorting ft_lstsize ft_lstaddfront ft_atoi \
		ft_isdigit ft_split ft_substr ft_strlen ft_putendl_fd ft_putchar_fd ft_putstr_fd ft_lstnew \
		ft_lstadd_back ft_lstlast ft_strjoin sortingcasesutils sort_huge sorting_cases
FILES_B = bonus/checker bonus/ft_atoi bonus/ft_lstadd_back bonus/ft_lstnew bonus/ft_split \
			bonus/ft_strjoin bonus/ft_substr bonus/parsing_bonus bonus/ft_lstlast\
			bonus/ft_putendl_fd bonus/ft_isdigit bonus/ft_putchar_fd bonus/ft_putstr_fd \
			bonus/get_next_line/get_next_line bonus/get_next_line/get_next_line_utils bonus/p_moves \
			bonus/r_moves bonus/rr_moves bonus/s_moves bonus/ft_lstsize bonus/ft_lstaddfront
OBJ=$(FILES:=.o)

OBJBONUS=$(FILES_B:=.o)

all: $(NAME)

%.o: %.c push_swap.h checker.h
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJ) push_swap.h
	$(CC) $(CFLAGS) $(OBJ) -g -o $(NAME)


bonus : $(NAME_B)

$(NAME_B): $(OBJBONUS)
	$(CC)  $(OBJBONUS) -o $(NAME_B)
# %.o: %.c checker.h
# 	$(CC) $(FLAGS) -c $<
clean:
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_B)

re: fclean all 
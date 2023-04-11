CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap
NAME_BONUS = checker
SOURCES = 	ft_strjoin.c 		push_swap.c 	ft_split.c 			check_all.c check_arg.c 	three.c\
			check_dup.c 		smell_number.c 	swap_function.c 	swap_function2.c 			swap_function3.c\
			tronsfer_array.c 	ft_atoi.c 		sortarray.c 		help1_function.c 			help2_function.c  rez.c

BNS = 	new_checker/checker.c 			new_checker/ft_split.c  			new_checker/ft_strjoin.c 		new_checker/tronsfer_array.c new_checker/ft_atoi.c \
		new_checker/check_all.c 		new_checker/check_arg.c 			new_checker/check_dup.c 		new_checker/help2_function.c new_checker/help1_function.c \
		new_checker/get_next_line.c 	new_checker/get_next_line_utils.c 	new_checker/swap_function1.c 	new_checker/swap_function2.c new_checker/swap_function3.c \
		new_checker/check_issort.c		new_checker/instraction.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(BNS:.c=.o)

all: $(NAME)
bonus : $(NAME_BONUS)

$(NAME):$(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@


$(NAME_BONUS):$(OBJECTS_BONUS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_BONUS)

re: fclean all
CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = rush-02
SRCS = ./main.c ./ft_find_nb.c ./helper_functions.c ./nb_is_true.c ./read_dict.c ./read_number.c ./print_nbr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -Iincludes $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

source = push_swap.c swap.c utils1.c\
push_a_b.c rotate.c utils4.c\
utils2.c utils3.c\

all: $(NAME)

$(NAME) : $(source) push_swap.h
	$(CC) $(CFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

re:	fclean all

.PHONY: clean fclean re all

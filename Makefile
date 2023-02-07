NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCE = push_swap.c swap.c utils1.c\
push_a_b.c rotate.c utils4.c\
utils2.c utils3.c\

OBJET = $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME) : $(OBJET) push_swap.h
	$(CC) $(CFLAGS) $(OBJET) -o $(NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJET)

fclean:
	rm -rf $(NAME)

re:	fclean all

.PHONY: clean fclean re all

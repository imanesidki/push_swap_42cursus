NAME = push_swap

BONUS_NAME = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCE = push_swap.c swap.c split.c\
push_a_b.c rotate.c strjoin.c finder.c\
parsing.c atoi.c linked_list.c elm_to_top.c\
freeing.c sorting.c indexing.c moves.c\


BONUS = main_bonus.c push_a_b.c strjoin.c\
rotate.c swap.c freeing.c atoi.c linked_list.c split.c\
get_next_line.c get_next_line_utils.c parsing.c\

OBJET = $(SOURCE:%.c=%.o)

OBJET_BONUS = $(BONUS:%.c=%.o)

all : $(NAME)

bonus : $(BONUS_NAME)

$(NAME) : $(OBJET)
	$(CC) $(CFLAGS) $(OBJET) -o $(NAME)

$(BONUS_NAME) : $(OBJET_BONUS) $(OBJET)
	$(CC) $(CFLAGS) $(OBJET_BONUS) -o $(BONUS_NAME)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJET) $(OBJET_BONUS)

fclean : clean
	rm -rf $(NAME)
	rm -f $(BONUS_NAME)

re :	fclean all

.PHONY : clean fclean re all bonus

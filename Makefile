NAME		=	push_swap

CC		=	clang

CFLAGS		=	-Wall -Wextra -Werror -g3 -fsanitize=address

INCLUDES	=	-I $(PATH_INC)			\
				-I $(PATH_LIBFT)inc/

SRCS		=	$(addprefix $(PATH_SRCS),	\
				$(addsuffix .c,			\
				error				\
				main				\
				parse				\
				operations			\
				operations2			\
				algo_minus			\
				utils))

OBJS		=	$(SRCS:.c=.o)

PATH_INC	=	./inc/
PATH_SRCS	=	./src/

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c Makefile $(PATH_INC)push_swap.h
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY	: all clean fclean re

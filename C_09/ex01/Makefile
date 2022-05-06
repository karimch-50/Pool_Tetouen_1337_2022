SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = libft.a
LIBR = ranlib
RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

.o.c:
	${CC} ${FLAGS} -c $< -o $@ -I includes

${NAME}:${OBJS}
	ar crs ${NAME} $<

all: ${NAME}

clean:
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re

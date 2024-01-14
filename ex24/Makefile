NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
       ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
HEADERS = ./includes/
CC = cc
C_FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADERS)/*.h
	$(CC) $(C_FLAGS) -c $< -o $@ -I $(HEADERS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

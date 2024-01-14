NAME = ft_display_file
SRCS = ./main.c
OBJS = ${SRCS:.c=.o}
CC = cc
C_FLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean

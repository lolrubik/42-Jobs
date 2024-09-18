CC = gcc

AR = ar

CFLAGS = -Wall -Wextra -Werror

FLAGS = rcs

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c = .o)

NAME = libft.a

LIB = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

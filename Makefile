##
## D:\Code\Epitech\navy\Makefile for navy in
##
## Made by Arthur Baurens
## Login   <arthur.baurens@epitech.eu>
##
## Started on  Mon Jan 30 15:21:58 2017 Arthur Baurens
## Last update Mon Jan 30 17:34:19 2017 Arthur Baurens
##

CC			=	gcc

SRC			=	main.c			\
				string.c		\
				parser.c		\
				printer.c		\
				map_gestioner.c	\
				get_next_line.c

OBJ			=	$(SRC:.c=.o)

NAME		=	navy

INCLUDES	=	-I./include

CFLAGS		=	$(INCLUDES) -g -W -Wall -Wextra #-ansi #-pedantic #-Werror

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re

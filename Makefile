##
## EPITECH PROJECT, 2021
## make
## File description:
## make
##

SRC	=	$(shell echo src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CC = gcc

lib = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)  $(lib)

clean:
	rm -f src/*.o
	rm -f src/*~

fclean: clean
	rm -f my_rpg

re: fclean all

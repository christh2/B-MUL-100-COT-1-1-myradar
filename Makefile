##
## EPITECH PROJECT, 2023
## radar
## File description:
## make
##

CC      = gcc

SRC     = charge_map.c	\
	  my_windows.c	\
	  get_nbr.c	\
	  comptage.c	\

OBJ     = $(SRC:.c=.o)

NAME    = my_radar

all     : $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-audio -lcsfml-system

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

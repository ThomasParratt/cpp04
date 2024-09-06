NAME		=	interface

SRC			=	AMateria.cpp Cure.cpp Ice.cpp Character.cpp main.cpp

CC			=	c++

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all:		$(NAME)

clean:
			${RM} $(NAME)

fclean: 	clean

re:			fclean all

.PHONY:		all clean fclean re
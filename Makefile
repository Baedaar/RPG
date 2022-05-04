CC		=	gcc
NAME	=	rpg
SRC		=	rpg.c
OBJ		=	$(SRC:%.c=%.o)
RM		=	rm -f

$(NAME):		$(OBJ)
				$(CC)	$(OBJ)	-o	$(NAME)
			
all:			$(NAME)

clean:
				$(RM)	$(OBJ)

fclean:			clean
				$(RM)	$(NAME)

re:				fclean all
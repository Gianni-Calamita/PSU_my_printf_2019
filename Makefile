##
## EPITECH PROJECT, 2019
## makefile 
## File description:
## compile libmy
##

SRC 	= 	./lib/my/my_strlen.c	\
			./lib/my/my_putchar.c	\
			./lib/my/my_putnbr.c	\
			./lib/my/my_printf.c	\
			./lib/my/my_putstr.c	\
			./lib/my/my_putunbr.c	\
			./lib/my/my_puthex.c	\
			./lib/my/my_putoctal.c	\
			./lib/my/my_putbinary.c	\
			./lib/my/my_puthex_maj.c	\
			./lib/my/my_printf_fonction_two.c	\
			./lib/my/my_printf_fonction_one.c

OBJ		=	$(SRC:.c=.o)

NAME	= 	libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	mv *.o lib/my
	ar rc libmy.a $(OBJ)
	cp lib/my/my.h ./include/
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	rm -f libmy.a
cclean : 
	rm -f unit_test
	rm -f ./lib/my/unit_test
gclean:
	rm -f ./lib/my/test_printf
re: 	fclean all
push: fclean cclean gclean
	rm -f ./lib/my/main.c ./lib/my/libmy.a libmy.a
	cp ./lib/my/my.h ./include
	git add --all
test_run :
	gcc -o unit_test $(SRC) ./include/unit_test.c -lcriterion
	./unit_test

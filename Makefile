##
## EPITECH PROJECT, 2019
## makefile 
## File description:
## compile libmy
##

SRC 	= 	./my_strlen.c	\
			./my_putchar.c	\
			./my_putnbr.c	\
			./my_printf.c	\
			./my_putstr.c	\
			./my_putunbr.c	\
			./my_puthex.c	\
			./my_puthex_maj.c	\
			./my_putoctal.c	\
			./my_putbinary.c	\
			./my_printf_fonction_two.c	\
			./my_printf_fonction_one.c


OBJ		=	$(SRC:.c=.o)

NAME	= 	libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	cp my.h ../../include/ 
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	rm -f ../libmy.a
cclean : 
	rm -f unit_test
gclean:
	rm test_printf
re: 	fclean all
gcc: 
	gcc $(SRC) main.c -o test_printf
	./test_printf
test_run :
	gcc -o unit_test $(SRC) unit_test.c -lcriterion
	./unit_test

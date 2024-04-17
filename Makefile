##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

UNAME	=	unit-tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

UCFLAGS	=	-W -Wall -Wextra -Werror -I./includes --coverage -lcriterion

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

SRC_TEST	=	$(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	$(CC) -o $(UNAME) $(SRC) $(SRC_TEST) $(UCFLAGS)
	./$(UNAME)
	gcovr -e tests/ && gcovr -e tests/ -b
tests_clean:
	$(RM) *.gcno *.gcda

tests_fclean: tests_clean
	$(RM) $(UNAME)

tests_re:	tests_fclean tests_run

.PHONY:	all clean fclean re tests_run tests_clean tests_fclean tests_re

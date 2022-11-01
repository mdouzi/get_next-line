NAME = get_next_line.a
SRC = *.c
LIBC = ar rc

OBG = ${src:.c=.o}

all:${NAME}

${NAME}: ${OBG}
	${LIBC} ${NAME} ${OBG}

clean:
	rm -f ${OBG}

fclean:
	rm -rf ${NAME}
re:fclean all





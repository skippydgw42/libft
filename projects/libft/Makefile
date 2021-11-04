NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCLUDES = -I./includes

OBJS = ${SRCS:.c=.o}

SRCS = 	srcs/isalpha.c\
		srcs/isdigit.c\
		srcs/isalnum.c\
		srcs/isascii.c\
		srcs/isprint.c\
		srcs/strlen.c\
		srcs/memset.c\
		srcs/bzero.c\
		srcs/memcpy.c\
		srcs/memmove.c\
		srcs/strlcpy.c\
		srcs/strlcat.c\
		srcs/toupper.c\
		srcs/tolower.c\
		srcs/strchr.c\
		srcs/strrchr.c\
		srcs/strncmp.c\
		srcs/memchr.c\
		srcs/memcmp.c\
		srcs/strmstr.c\
		srcs/atoi.c\
		srcs/calloc.c\
		srcs/strdup.c\
		srcs/ft_substr.c\
		srcs/ft_strjoin.c\
		srcs/ft_strtrim.c\
		srcs/ft_split.c\
		srcs/ft_itoa.c\
		srcs/ft_strmapi.c\
		srcs/ft_striteri.c\
		srcs/ft_putchar_fd.c\
		srcs/ft_putstr_fd.c\
		srcs/ft_putendl_fd\
		srcs/ft_putnbr_fd.c\

all :		${NAME}

${NAME} :	${OBJS}
	ar -cr ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} ${INCLUDES} -o $@ -c $<

clean :
	rm -f ${OBJS}

fclean :	clean
	rm -f ${NAME}

re :		fclean all

.PHONY : clean fclean all re
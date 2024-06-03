NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
RM = rm -f
LIBC = ar rc

SRCS = \
ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strchr.c \
ft_strrchr.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_calloc.c \

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

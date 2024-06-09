NAME = libft.a
CC = cc
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
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_tolower.c \
ft_toupper.c \

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CCFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

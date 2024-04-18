#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int ft_isalnum(char c);
int ft_isascii(int c);
int ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	strlen(char *s);

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	atoi(const char *nptr);

#endif

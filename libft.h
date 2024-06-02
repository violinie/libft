/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:19:08 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/02 14:40:11 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <aio.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlen(const char *s);
int	ft_toupper(int c);

#endif

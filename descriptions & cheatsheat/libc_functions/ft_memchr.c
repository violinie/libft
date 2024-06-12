/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:35 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 09:24:40 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// locates the first occurence of c (convered to an unsigned char) in string s
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src; // change from void to unsigned char allows working with the memory block at the byte level
	unsigned char		cc;

	src = (const unsigned char *)s; // original memory block => points to the beginning
	cc = (unsigned char)c; // char that we are looking for in the memory block
	while (n)
	{
		if (*src == cc) // if the byte (to which points src) is the same as the comparing char cc
			return ((void *)src); // return pointer to that char
		src++; // next byte in the pointer
		n--; // decrease n
	}
	return (NULL); // if there is no match, return NULL
}

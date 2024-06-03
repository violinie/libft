/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:17:53 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/03 13:36:07 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		cc;

	src = (const unsigned char *)s;
	cc = (unsigned char)c;
	while (n)
	{
		if (*src == cc)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}

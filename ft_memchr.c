/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:35 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 11:35:35 by hcopakov         ###   ########.fr       */
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

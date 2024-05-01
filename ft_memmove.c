/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:07:59 by hanacop           #+#    #+#             */
/*   Updated: 2024/05/01 12:07:59 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char temp[n];
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;
	size_t				i;

	temp_d = dest;
	temp_s = src;
	i = 0;
	while (n > 0)
	{
		temp_d[i] = temp_s[i];
		i++;
		n--;
	}
	return (dest);
}

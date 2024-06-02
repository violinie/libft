/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:04:28 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/01 16:46:05 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

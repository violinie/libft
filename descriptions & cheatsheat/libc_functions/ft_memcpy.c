/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:37:05 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 09:41:27 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// copies n bytes from memory area src to memory area dest, if dest and src overlap, behavior is undefined
void	*ft_memcpy(void *dest, const void *src, size_t n) // memory copy
{
	// change from void to unsigned char allows working with the memory block at the byte level
	unsigned char		*temp_d;
	const unsigned char	*temp_s;
	size_t				i;

	temp_d = dest;
	temp_s = src;
	i = 0;
	// if they are not existing, return NULL
	if (!temp_d && !temp_s)
		return (NULL);
	while (n > 0)
	{
		temp_d[i] = temp_s[i]; // copy from the first element (temp_d[0]) all over (till the n is still bigger than zero)
		i++;
		n--;
	}
	return (dest); // return pointer to destination
}

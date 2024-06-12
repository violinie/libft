/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:25 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 10:28:49 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// copies len bytes from string src to string dest
void	*ft_memmove(void *dest, const void *src, size_t n) // memory move
{
	char	*t_src;
	char	*t_dest;
	size_t	i;

	// explicit retyped from void to char allows working with the memory block at the byte level
	t_src = (char *)src;
	t_dest = (char *)dest;
	// if its both NULL, return NULL
	if (t_dest == NULL && t_src == NULL)
		return (NULL);
	// important to make sure, if they are overlaping, choose the right direction from which to copy
	// if the dest is in front of source do the forward copy, else do the backward copy
	if (t_dest < t_src)
	{
		i = 0;
		// forward copy
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		// backward copy
		while (i != 0)
		{
			t_dest[i] = t_src[i];
			i--;
		}
	}
	return (dest); // return pointer to destination
}

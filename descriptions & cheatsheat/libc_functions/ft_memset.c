/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:15 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 10:35:42 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// writes len bytes of value c (converted to an unsigned char) to the string b
void	*ft_memset(void *s, int c, size_t n) // memory set
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s; // explicit retyped from void to char allows working with the memory block at the byte level
	i = 0;
	while (n > 0)
	{
		ptr[i] = c; // rewrite ptr[0] till ptr[n]
		i++; // increase i (first round == 0 + 1)
		n--; // decrease n (== n - 1)
	}
	return (s); // return the original pointer to the memory block s
}

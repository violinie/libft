/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:31 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 09:32:34 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// compares byte string s1 against byte string s2, both strings are assumed to be n bytes long
int	ft_memcmp(const void *s1, const void *s2, size_t n) // memory compare
{
	// change from void to unsigned char allows working with the memory block at the byte level
	unsigned const char	*t2;
	unsigned const char	*t1;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n) // until they exists
	{
		// if they are not the same, return the difference
		if (*t1 != *t2)
			return (*t1 - *t2); // it can be positive or negative, thats how we know what is bigger
		t1++; // next byte
		t2++; // next byte
		n--; // decrease n
	}
	return (0); // if they are the same, return 0
}

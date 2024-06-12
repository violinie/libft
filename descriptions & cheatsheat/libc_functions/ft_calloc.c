/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:41:26 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/06 14:45:30 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// allocates memory for an array of elc elements, each of size els, and initializes the memory to zero
// elc = element count
// els = element size
void	*ft_calloc(size_t elc, size_t els)
{
	void	*ptr;
	size_t	total_size;

	if (elc == 0 || els == 0)
	{
		elc = 1;
		els = 1;
	}
	total_size = elc * els; // calculate the total size needed
	// check for overflow: if total_size is less than elc or els, it means overflow occurred
	// suppose we are working with a 32-bit system, where the maximum value that size_t can hold is 2^32 = 409620408
	// when the result exceeds this value, the system "wraps" the result back to the lower value, so its lower than one of them
	if (total_size < elc || total_size < els)
		return (NULL);
	ptr = malloc(total_size);  // allocate memory of total_size bytes
	// if malloc fails, return NULL
	if (!ptr)
		return (NULL);
	// initialize the allocated memory to zero
	ft_bzero(ptr, total_size);
	// return a pointer to the allocated memory, which is suitably aligned for any built-in type
	return (ptr);
}


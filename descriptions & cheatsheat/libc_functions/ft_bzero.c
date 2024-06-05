/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:38:17 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/03 20:04:16 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// "erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area"
// = sets all bytes in the memory area that starts at the s pointer address to zero
// = the size of this memory region is determined by the parameter n
// (this process is often used to initialize or clear data structures)
void	ft_bzero(void *s, size_t n)
{
	char	*temp; // temporary pointer to the memory area
	size_t	i;

	temp = (char *)s; // cast the void pointer to a char pointer (need to specify it to dereferencing it later)
	i = 0;
	while (n > 0)
	{
		temp[i] = '\0'; // set each byte to zero
		i++;
		n--; // lower the n, till n = 0 (condition of this while)
	}
}

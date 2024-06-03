/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:41:26 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/03 17:49:47 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elc, size_t els)
{
	void	*ptr;
	size_t	total_size;

	if (elc == 0 || els == 0)
	{
		elc = 1;
		els = 1;
	}
	total_size = elc * els;
	if (total_size < elc || total_size < els)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}


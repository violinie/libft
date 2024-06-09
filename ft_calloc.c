/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:56 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 11:35:57 by hcopakov         ###   ########.fr       */
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

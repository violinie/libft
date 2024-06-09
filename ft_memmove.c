/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:25 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 12:26:59 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t_src;
	char	*t_dest;
	size_t	i;

	t_src = (char *)src;
	t_dest = (char *)dest;
	if (t_dest == NULL && t_src == NULL)
		return (NULL);
	if (t_dest < t_src)
	{
		i = 0;
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- != 0)
			t_dest[i] = t_src[i];
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:43:52 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/03 13:11:08 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	to_copy;
	int		i;

	if ((src == NULL && size == 0)
		|| (dst == NULL && size == 0))
		return (0);
	d_len = ft_strlen(dst);
	s_len = ft_strlen((char *)src);
	if (d_len >= size)
		return (s_len + size);
	to_copy = size - d_len - 1;
	i = 0;
	while (dst[i])
		i++;
	dst = dst + i;
	i = 0;
	while (src[i] && (to_copy-- != 0))
	{
		*(dst + i) = src[i];
		i++;
	}
	*(dst + i) = '\0';
	return (d_len + s_len);
}

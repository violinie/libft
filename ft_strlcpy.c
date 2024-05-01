/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:08:12 by hanacop           #+#    #+#             */
/*   Updated: 2024/05/01 12:08:12 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while(i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = "\0";
	return (i);
}

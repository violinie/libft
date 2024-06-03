/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:45:14 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/03 13:04:10 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_occurrence);
}

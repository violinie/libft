/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:39:59 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 16:02:05 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_map;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	s_map = ft_calloc(len + 1, sizeof(char));
	if (!s_map)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_map[i] = f(i, s[i]);
		i++;
	}
	s_map[i] = '\0';
	return (s_map);
}

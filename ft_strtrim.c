/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:31:52 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 15:39:20 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char a, const char *set)
{
	while (*set)
	{
		if (a == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_in_set(s1[end - 1], set))
		end--;
	if (end <= start)
		return (ft_calloc(1, sizeof(char)));
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + start, end - start);
	trim[end - start] = '\0';
	return (trim);
}

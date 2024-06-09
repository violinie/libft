/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:03 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 17:04:05 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			num++;
		while (s[i] != c && s[i])
			i++;
	}
	return (num);
}

static char	*allocate_and_copy_substring(const char *s, char c)
{
	size_t	i;
	char	*out;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	out = malloc(i + 1);
	if (!out)
	{
		free(out);
		return (NULL);
	}
	ft_strlcpy(out, s, i + 1);
	return (out);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**out;

	len = count_words(s, c);
	out = ft_calloc(sizeof(char *), (len + 1));
	if (!out)
		return (0);
	i = 0;
	while (i < len)
	{
		while (s[0] == c)
			s++;
		out[i] = allocate_and_copy_substring(s, c);
		if (!out[i])
		{
			free(out);
			return (NULL);
		}
		s = s + ft_strlen(out[i]);
		i++;
	}
	out[i] = 0;
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:55:24 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/04 14:24:53 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start + 1 == 0)
		return (ft_calloc(1, sizeof(char)));
	if (len == 0 || ft_strlen((char *)s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if (len > (size_t)ft_strlen((char *)(s + start)))
		len = (size_t)ft_strlen((char *)(s + start));
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

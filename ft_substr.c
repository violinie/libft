/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:34:26 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 08:13:04 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start + 1 == 0)
		return (ft_calloc(0, 0));
	if (len == 0 || ft_strlen((char *)s) < (int)start + 1)
		return (ft_calloc(0, 0));
	if (len > (size_t)ft_strlen((char *)(s + start)))
		len = (size_t)ft_strlen((char *)(s + start));
	sub = malloc(sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	ft_bzero(sub, len + 1);
	ft_memcpy(sub, s + start, len);
	return (sub);
}

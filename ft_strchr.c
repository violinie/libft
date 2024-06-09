/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:34:59 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 15:14:35 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	int		i;

	cc = c;
	i = 0;
	if (cc == '\0')
		return ((char *)s + ft_strlen((char *)s));
	while (s[i])
	{
		if (s[i] == (char )cc)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

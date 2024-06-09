/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:34:35 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/06 12:13:19 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (n > 0)
		{
			if (((unsigned char)s1[i] != (unsigned char)s2[i])
				|| !(unsigned char)s1[i])
				return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
			i++;
			n--;
		}
	}
	return (0);
}

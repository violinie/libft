/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:31:50 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 09:26:09 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c == '\f') || (c == '\n') || (c == '\r')
		|| (c == '\t') || (c == '\v') || (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		res;
	int		sign;
	size_t	i;

	res = 0;
	sign = 1;
	i = 0;
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = 10 * res + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

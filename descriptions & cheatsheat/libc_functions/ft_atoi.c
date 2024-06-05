/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:13 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/03 19:40:35 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	// is the parameter whitespace? return 1 (true) : 0 (false)
	if ((c == '\f') || (c == '\n') || (c == '\r')
		|| (c == '\t') || (c == '\v') || (c == ' '))
		return (1);
	return (0);
}

// converts the initial portion of the string pointed to by nptr to int
int	ft_atoi(const char *nptr)
{
	int		res; // result
	int		sign;
	size_t	i;

	res = 0;
	sign = 1;
	i = 0;
	// looping throught the string to skip whitespace and get first number
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	// if its a sign +/-
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-') // if its - assign sign to - (+ is not necessary)
			sign = -1;
		i++; // skip it to the next index
	}
	// if its empty, return 0 (error)
	if (nptr[i] == '\0')
		return (0);
	// if its not the end of the string and the value is number (isdigit)
	// Example string "123":
	// First iteration:		res = 0 * 10 + (1 - '0') = 0 + 1 = 1
	// Second iteration:	res = 1 * 10 + (2 - '0') = 10 + 2 = 12
	// Third iteration:		res = 12 * 10 + (3 - '0') = 120 + 3 = 123
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = 10 * res + (nptr[i] - '0'); // (nptr[i] - '0') translate 'char number' to number
		i++;
	}
	// return the converted value or 0 on error
	return (sign * res);
}

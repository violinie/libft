/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:13 by hanacop           #+#    #+#             */
/*   Updated: 2024/04/18 12:22:07 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	isspace(int c)
{
	if ((c == '\f') || (c == '\n') || (c == '\r')
		|| (c == '\t') || (c == '\v') || (c == ' '))
		return (1);
	return (0);
}

int	atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	while (nptr[i] && ft_isspace(nptr[i]))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = 10 * res + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

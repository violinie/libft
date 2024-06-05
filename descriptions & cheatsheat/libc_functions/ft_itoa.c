/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:51:30 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:26:43 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// counts the number of digits in a non-negative integer
static int	count_digits(int num)
{
	size_t	count;

	count = 0;
	if (num < 0)
		num = num * -1; // convert negative number to positive
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

// converts an integer to a null-terminated string representing that integer
char	*ft_itoa(int n)
{
	int		digits;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	res = ft_calloc(digits + 1, sizeof (char));
	if (!res)
		return (NULL);
	while (n > 0)
	{
		res[digits - 1] = (n % 10) + '0';
		n = n / 10;
		digits--;
	}
	if (digits)
		res[digits - 1] = '-';
	return (res);
}

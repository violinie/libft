/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:51:30 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/07 08:57:49 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// counts the number of digits in a non-negative integer
static int	count_digits(int num)
{
	size_t	count;

	count = 0;
	if (num < 0)
		num = num * -1; // convert negative number to positive
	// go throught each digit and increase count to count them
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count); // return number of digits
}

// converts an int to a string (opposite of atoi)
char	*ft_itoa(int n)
{
	int		digits;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648) // max integer
		return (ft_strdup("-2147483648"));
	digits = count_digits(n); // count digits of integer
	if (n < 0)
	{
		digits++; // increase digits +1 because of the - sign
		n *= -1; // make it positive
	}
	res = ft_calloc(digits + 1, sizeof (char)); // create space for res, digits == number of digits + 1 for '\0'; size of each element == char
	// if memory allocation failed, return NULL.
	if (!res)
		return (NULL);
	while (n > 0) // loop until all digits are processed, example with 13
	{
		res[digits - 1] = (n % 10) + '0'; // (13 % 10) = 3, '3' is stored in res[1] // (1 % 10) = 1, '1' is stored in res[0]
		n = n / 10; // (13 / 10) = 1.3 // (1 / 10) = 0.1 (the loop will stop, because n is smaller than 0)
		digits--; // 13 has two digits, so now its 1 // 0
	}
	// if there are digits left that means that there was the - sign, so we add that
	if (digits)
		res[digits - 1] = '-';
	return (res); // return result
}

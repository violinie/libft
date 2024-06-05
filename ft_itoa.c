/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:51:30 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 15:39:09 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int num)
{
	int	count;

	count = 0;
	if (num < 0)
		num = num * -1;
	while (num > 0)
	{

		num = num / 10;
		count++;
	}
	return (count);
}

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

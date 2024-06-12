/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:08 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 11:46:59 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// static function are something "private" functions in Angular == see and use this function only in this file
static void	ft_putnbr(int n, int fd) // put positive number
{
	char	c;

	if (n > 0)
	{
		ft_putnbr(n / 10, fd); // (42 / 10) = 4 // (4 / 10) = 0.4
		c = n % 10 + '0'; // output from second call (4 % 10) = 4 // output from first call (42 % 10) = 2
		write(fd, &c, 1); // write one digit int c in fd output // 4 // 2
	}
}

// writes the int n on the file descriptor fd
void	ft_putnbr_fd(int n, int fd) // put number
{
	if (n == -2147483648) // special edge case, because negative integer is one more once is converted to positive number
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(-n, fd);
	}
	else if (n == 0)
		write(fd, "0", 1);
	else
		ft_putnbr(n, fd);
}

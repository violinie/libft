/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:12 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 11:04:36 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// writes the character c on the file descriptor fd
void	ft_putchar_fd(char c, int fd) // put character to file descriptor
{
	// fd can be stdout (standard output == 1) || stderr (standard error == 2)
	write(fd, &c, 1); // write c on output of fd with size 1
}

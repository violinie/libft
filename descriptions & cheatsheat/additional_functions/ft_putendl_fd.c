/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:35:10 by hcopakov          #+#    #+#             */
/*   Updated: 2024/06/07 11:04:07 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// writes the string s, followed by a newline, on the file descriptor fd
// *s is pointer, which has to be written, fd is output
void	ft_putendl_fd(char *s, int fd) // put string with newline to file descriptor
{
	size_t	i;

	i = 0;
	while (s[i] != '\0') // until s exists
	{
		// fd can be stdout (standard output == 1) || stderr (standard error == 2)
		write(fd, &s[i], 1); // first round == write the first element s[i] on the fd output
		i++; // increase i and move to the next element of s
	}
	write(fd, "\n", 1); // write next line to the fd output
}

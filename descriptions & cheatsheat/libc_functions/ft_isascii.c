/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:43:44 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:20:36 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if the character is ASCII
int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127)); // returns true if the character is in the ASCII range (0 to 127)
}

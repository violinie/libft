/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:32:13 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:23:03 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if the character is printable ASCII character
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126); // returns true if the character is in the range of printable ASCII characters (32 to 126)
}

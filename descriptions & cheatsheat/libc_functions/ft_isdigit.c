/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:55 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:21:24 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if the character is a digit
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9'); // returns true if the character is in the range '0' to '9'
}

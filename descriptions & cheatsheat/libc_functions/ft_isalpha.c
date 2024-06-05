/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:36 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:19:27 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// check if the character is in the alphabet
int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); // returns true if the character is a letter (either lowercase or uppercase)
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:27 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/05 23:17:45 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check if a character is alphanumeric
int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c)); // returns true if the character is either a letter or a digit
}

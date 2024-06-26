/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcopakov <hcopakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:27 by hanacop           #+#    #+#             */
/*   Updated: 2024/06/06 14:32:46 by hcopakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

// check if a character is alphanumeric
int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c)); // returns true if the character is either a letter or a digit
}

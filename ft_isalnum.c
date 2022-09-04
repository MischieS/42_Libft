/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 02:53:10 by btaskin           #+#    #+#             */
/*   Updated: 2022/09/04 06:29:56 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if (num >= 'A' && num <= 'Z')
		return (1);
	else if (num >= 'a' && num <= 'z')
		return (1);
	else if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

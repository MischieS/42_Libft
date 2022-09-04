/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:19:47 by btaskin           #+#    #+#             */
/*   Updated: 2022/08/29 18:39:56 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index++;
	}
	if (str[index] == (char)c)
		return ((char *)(str + index));
	return (NULL);
}

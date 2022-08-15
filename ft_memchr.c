/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:50:01 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/05 03:51:41 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t n)
{
	unsigned char	ch;
	unsigned char	*sr;
	size_t			i;

	ch = (unsigned char)chr;
	sr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (sr[i] == ch)
			return ((void *)(&sr[i]));
		i++;
	}
	return (NULL);
}

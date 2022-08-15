/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:02:14 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/05 03:14:48 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;

	i = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize <= size_src)
		return (dstsize + size_src);
	while (src[i] != '\0' && dstsize > (size_dst + 1))
	{
		dst[size_dst] = src[i];
		i++;
		size_dst++;
	}
	dst[size_dst] = '\0';
	return (size_dst);
}

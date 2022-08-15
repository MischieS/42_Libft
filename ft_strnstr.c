/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 04:10:31 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/05 04:13:23 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while ((haystack[i + c] == needle[c]) && (i + c) < len)
		{
			if (needle[c + 1] == '\0')
				return ((char *)(&haystack[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}

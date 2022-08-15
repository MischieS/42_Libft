/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:31:47 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/05 03:35:50 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*found;

	c = (unsigned char)c;
	if (c == 0)
		return (ft_strchr(s, '\0'));
	found = 0;
	while (ft_strchr(s, c) != 0)
	{
		found = ft_strchr(s, c);
		s = ft_strchr(s, c) + 1;
	}
	return ((char *)found);
}

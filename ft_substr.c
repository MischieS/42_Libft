/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:47:36 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/27 00:11:45 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*str2;
	size_t	str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen((char *)str);
	if (start > str_len)
		return (ft_strdup(""));
	if (str_len - start >= len)
		str2 = (char *)malloc((len + 1) * sizeof(char));
	else
		str2 = (char *)malloc((str_len - start +1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	ft_strlcpy(str2, (str + start), (len + 1));
	return (str2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:13:07 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/05 03:13:38 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main()
{
	char a[] = "patates";
	char b[] = " kominizm";
	ft_strlcat(a, b, 8);
	//strlcat(a, b, 1);
	printf("%lu", strlcat(a, b, 1));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:38:25 by btaskin           #+#    #+#             */
/*   Updated: 2022/07/27 00:38:34 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	index;

	index = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		index = n * -1;
	}
	else
		index = n;
	if (index > 9)
		ft_putnbr_fd(index / 10, fd);
	ft_putchar_fd(index % 10 + '0', fd);
}

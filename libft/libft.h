/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaskin <btaskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:10:21 by btaskin           #+#    #+#             */
/*   Updated: 2022/06/23 05:26:05 by btaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int	ft_isalpha(int i);
int	ft_isdigit(int i);
int	ft_isalnum(int i);
int	ft_isascii(int i);
int	ft_isprint(int i);
size_t	ft_strlen(const char *c);

#endif
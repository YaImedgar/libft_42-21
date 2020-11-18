/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:06:50 by imedgar           #+#    #+#             */
/*   Updated: 2020/11/18 19:37:17 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putstr_fd(char *s, int fd)
{
	int res;

	res ^= res;
	while (*s)
		res += ft_putchar_fd(*s++, fd);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:57:13 by imedgar           #+#    #+#             */
/*   Updated: 2020/11/20 15:41:46 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int				ft_putchars(char c, int nbr, char *str, t_fl *fl)
{
	int res;
	int i;

	i = 0;
	res = 0;
	if (fl->pdn)
	{
		res = ft_putstr_fd(str, fl->fd);
		while (i++ < nbr)
			res += ft_putchar_fd(c, fl->fd);
	}
	else
	{
		while (i++ < nbr)
			res += ft_putchar_fd(c, fl->fd);
		res += ft_putstr_fd(str, fl->fd);
	}
	return (res);
}

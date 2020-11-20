/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:57:07 by imedgar           #+#    #+#             */
/*   Updated: 2020/11/20 15:41:41 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int				ft_print_char(char c, t_fl *fl)
{
	int		res;
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	res = 0;
	if (str[0] == '%' && fl->zer && !fl->pdn)
		res += ft_putchars('0', fl->width - 1, str, fl);
	else if (fl->width > 1)
	{
		if (c == '\0' && fl->pdn)
			res += ft_putchar_fd(c, fl->fd);
		res += ft_putchars(' ', fl->width - 1, str, fl);
		if (c == '\0' && !fl->pdn)
			res += ft_putchar_fd(c, fl->fd);
	}
	else
		res = ft_putchar_fd(c, fl->fd);
	return (res);
}

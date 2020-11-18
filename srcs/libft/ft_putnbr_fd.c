/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:07:20 by imedgar           #+#    #+#             */
/*   Updated: 2020/11/18 19:36:49 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int nb, int fd)
{	
	int res;

	res ^= res;
	if (nb < 0)
	{
		res += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		res += ft_putchar_fd(nb + '0', fd);
	else
	{
		res += ft_putnbr_fd((unsigned int)nb / 10, fd);
		res += ft_putchar_fd((unsigned int)nb % 10 + '0', fd);
	}
	return (res);
}

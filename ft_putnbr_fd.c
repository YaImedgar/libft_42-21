/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:07:20 by imedgar           #+#    #+#             */
/*   Updated: 2020/04/30 00:07:21 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putnbr_fd((unsigned int)nb / 10, fd);
		ft_putchar_fd((unsigned int)nb % 10 + '0', fd);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:43:17 by imedgar           #+#    #+#             */
/*   Updated: 2020/11/20 20:51:14 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_free_all(int num_to_del, ...)
{
	va_list		factor;
	void		**ptr;

	va_start(factor, num_to_del);
	while (num_to_del-- != 0)
	{
		ptr = (void **)va_arg(factor, void **);
		free(*ptr);
		*ptr = NULL;
	}
	va_end(factor);
}

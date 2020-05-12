/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 22:22:11 by imedgar           #+#    #+#             */
/*   Updated: 2020/05/04 13:34:22 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back_up;

	if (!new)
		return ;
	if (*lst)
	{
		back_up = *lst;
		while (back_up->next)
			back_up = back_up->next;
		back_up->next = new;
	}
	else
		*lst = new;
}

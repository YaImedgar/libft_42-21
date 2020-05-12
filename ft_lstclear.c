/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 22:36:23 by imedgar           #+#    #+#             */
/*   Updated: 2020/05/04 13:25:30 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**back_up;
	t_list	*tmp;

	if (!del || !lst)
		return ;
	back_up = lst;
	while (*lst)
	{
		tmp = *lst;
		(*del)(tmp->content);
		*lst = (*lst)->next;
		tmp->next = NULL;
		free(tmp);
	}
	*back_up = NULL;
}

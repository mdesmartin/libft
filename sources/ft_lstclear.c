/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesmart <mdesmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:51:40 by mvogel            #+#    #+#             */
/*   Updated: 2023/05/30 16:22:54 by mdesmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*nxt;

	if (!del || !lst || !*lst)
		return ;
	if (lst)
	{
		current = *lst;
		while (current)
		{
			nxt = current->next;
			ft_lstdelone(current, (del));
			current = nxt;
		}
		*lst = NULL;
	}
}

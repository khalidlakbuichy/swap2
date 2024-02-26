/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:56:01 by klakbuic          #+#    #+#             */
/*   Updated: 2024/02/17 10:46:04 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

bool	ft_lstdel_back(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (del == NULL || (*lst) == NULL || lst == NULL)
		return (false);
	last = ft_lstlast(*lst);
	if (last->prev != NULL)
		last->prev->next = NULL;
	else
		*lst = NULL;
	last->prev = NULL;
	last->next = NULL;
	del(last->content);
	free(last);
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:00:40 by klakbuic          #+#    #+#             */
/*   Updated: 2024/02/26 09:57:15 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	put_elem_top(t_stack *b, int i, int *nb, int *nb2)
{
	if (i >= (b->size / 2))
		while (cmp(b->top->content, nb) != 0 && cmp(b->top->content, nb2) != 0)
			rrb(b);
	else
		while (cmp(b->top->content, nb) != 0 && cmp(b->top->content, nb2) != 0)
			rb(b);
}

void	put_elem_2a(t_stack *a, t_stack *b, int *nb, int *nb2)
{
	pa(b, a);
	// printf("size b: %d\n", b->size);
	// printf("nb: %d\t nb2: %d\n", *nb, *nb2);
	// puts("stack b: ----------------------------");
	// ft_lstiter(b->top, ft_print);
	if (a->size % 2 == 0 && a->size != 0)
	{
		*nb = *nb - 2;
		*nb2 = *nb - 1;
	}
	if (a->top->next && cmp(a->top->content, a->top->next->content) > 0)
		sa(a);
		
}

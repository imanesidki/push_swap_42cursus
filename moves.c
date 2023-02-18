/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:00:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/17 13:35:14 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*min_total_moves(t_list **a, t_list **b)
{
	t_list	*tmpb;
	t_list	*tmp;
	int		j;

	indexing(*a);
	indexing(*b);
	tmpb = *b;
	tmp = tmpb;
	j = check_index(tmpb->index, index_elm_b_in_a(tmpb->content, *a));
	while (tmpb)
	{
		if (j > check_index(tmpb->index, index_elm_b_in_a(tmpb->content, *a)))
		{
			j = check_index(tmpb->index, index_elm_b_in_a(tmpb->content, *a));
			tmp = tmpb;
		}
		tmpb = tmpb->next;
	}
	return (tmp);
}

void	push_back_to_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	while (*b)
	{
		tmp = min_total_moves(a, b);
		elm_to_top_ab(a, b, index_elm_b_in_a(tmp->content, *a), tmp->index);
		pa(a, b, 0);
		indexing(*a);
		indexing(*b);
	}
}

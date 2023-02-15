/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:00:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/15 05:27:48 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_to_top(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = find_min_content(*a);
	while (tmp)
	{
		if (tmp->index == 0 && tmp->content == i)
			return ;
		if (tmp->index > 0 && tmp->content == i)
		{
			while ((tmp->index)-- != 0)
				ra(a, 0);
		}
		else if (tmp->index < 0 && tmp->content == i)
		{
			while ((tmp->index)++ != 0)
				rra(a, 0);
		}
		tmp = tmp->next;
	}
}

void	elm_to_top(t_list **a, int i)
{
	if (i == 0)
		return ;
	if (i > 0)
	{
		while (i-- != 0)
			ra(a, 0);
	}
	else if (i < 0)
	{
		while (i++ != 0)
			rra(a, 0);
	}
}

t_list	*min_total_moves(t_list *a, t_list *b)
{
	t_list	*tmpb;
	t_list	*tmp;
	int		j;

	indexing(a);
	indexing(b);
	tmpb = b;
	j = check_index(tmpb->index, index_elm_b_in_a(tmpb->content, a));
	while (tmpb)
	{
		if (j > check_index(tmpb->index, index_elm_b_in_a(tmpb->content, a)))
		{
			j = check_index(tmpb->index, index_elm_b_in_a(tmpb->content, a));
			tmp = tmpb;
		}
		tmpb = tmpb->next;
	}
	return (tmp);
}

void	push_back_to_a(t_list **a, t_list **b)
{
	t_list	*tmpb;
	t_list	*tmp;

	tmpb = *b;
	while (tmpb)
	{
		tmp = min_total_moves(*a, *b);
		if (tmpb->content == tmp->content)
		{
			elm_to_top(b, tmpb->index);
			elm_to_top(a, index_elm_b_in_a(tmpb->content, *a));
			pa(a, b, 0);
			indexing(*a);
			indexing(*b);
			tmpb = *b;
		}
		else
			tmpb = tmpb->next;
	}
}

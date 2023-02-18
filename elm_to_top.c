/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elm_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 05:03:47 by isidki            #+#    #+#             */
/*   Updated: 2023/02/17 12:47:16 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	elm_to_top_ab(t_list **a, t_list **b, int indexa, int indexb)
{
	same_index_ab_pos(a, b, indexa, indexb);
	same_index_ab_neg(a, b, indexa, indexb);
	diff_index_ab_1(a, b, indexa, indexb);
	diff_index_ab_2(a, b, indexa, indexb);
}

void	same_index_ab_neg(t_list **a, t_list **b, int indexa, int indexb)
{
	if (indexa < 0 && indexb < 0)
	{
		while (indexa && indexb)
		{
			rrr(a, b, 0);
			indexb++;
			indexa++;
		}
		while (indexa)
		{
			rra(a, 0);
			indexa++;
		}
		while (indexb)
		{
			rrb(b, 0);
			indexb++;
		}
	}
}

void	same_index_ab_pos(t_list **a, t_list **b, int indexa, int indexb)
{
	if (indexa >= 0 && indexb >= 0)
	{
		while (indexa && indexb)
		{
			rr(a, b, 0);
			indexb--;
			indexa--;
		}
		while (indexa)
		{
			ra(a, 0);
			indexa--;
		}
		while (indexb)
		{
			rb(b, 0);
			indexb--;
		}
	}
}

void	diff_index_ab_1(t_list **a, t_list **b, int indexa, int indexb)
{
	if (indexa >= 0 && indexb < 0)
	{
		while (indexa)
		{
			ra(a, 0);
			indexa--;
		}
		while (indexb)
		{
			rrb(b, 0);
			indexb++;
		}
	}
}

void	diff_index_ab_2(t_list **a, t_list **b, int indexa, int indexb)
{
	if (indexa < 0 && indexb >= 0)
	{
		while (indexa)
		{
			rra(a, 0);
			indexa++;
		}
		while (indexb)
		{
			rb(b, 0);
			indexb--;
		}
	}
}

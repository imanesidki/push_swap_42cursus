/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:57:31 by isidki            #+#    #+#             */
/*   Updated: 2023/03/02 16:32:39 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		i;

	tmp = *a;
	tmp2 = find_max_content(*a);
	i = tmp2->content;
	if (tmp->content == i)
		ra(a, 0);
	else if (tmp->next->content == i)
		rra(a, 0);
	tmp = *a;
	i = tmp->content;
	tmp = tmp->next;
	if (i > tmp->content)
		sa(a, 0);
}

void	sort5(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;
	int		j;

	i = 0;
	tmp = *a;
	j = ft_lstsize(*a);
	while (i < j - 3)
	{
		indexing(*a);
		min_to_top(a);
		if (ft_sorted(*a))
			return ;
		pb(a, b, 0);
		i++;
	}
	sort3(a);
	while (i--)
		pa(a, b, 0);
}

void	push_not_lis(t_list **a, t_list **b)
{
	t_list	*tmp1;

	tmp1 = *a;
	while (tmp1)
	{
		if (tmp1->dex == 0)
			tmp1 = tmp1->next;
		else
		{
			indexing(*a);
			elm_to_top(a, tmp1->index);
			pb(a, b, 0);
			tmp1 = *a;
		}
	}
}

void	lis_sort(t_list **a, t_list **b)
{
	dexing(a);
	set_dex_lis_tozero(a);
	push_not_lis(a, b);
	push_back_to_a(a, b);
	min_to_top(a);
}

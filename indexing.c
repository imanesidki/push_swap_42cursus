/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:55:19 by isidki            #+#    #+#             */
/*   Updated: 2023/02/14 02:45:14 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_dex(t_list *a)
{
	t_list	*tmp;
	int		i;

	tmp = a;
	i = tmp->dex;
	tmp = tmp->next;
	while (tmp)
	{
		if (i < tmp->dex)
			i = tmp->dex;
		tmp = tmp->next;
	}
	return (i);
}

void	indexing(t_list *a)
{
	int	middle;
	int	len;
	int	i;

	i = -1;
	len = ft_lstsize(a);
	middle = (ft_lstsize(a) / 2);
	while (a && ++i <= middle)
	{
		a->index = i;
		a = a->next;
	}
	while (a && i < len)
	{
		a->index = i - len;
		a = a->next;
		i++;
	}
}

void	dexing(t_list **a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp2 = (*a)->next;
	while (tmp2)
	{
		tmp1 = *a;
		while (tmp1->next)
		{
			if (tmp2->content > tmp1->content && tmp2->dex < (tmp1->dex + 1))
				(tmp2->dex)++;
			tmp1 = tmp1->next;
		}
		tmp2 = tmp2->next;
	}
}

void	set_dex_lis_tozero(t_list **a)
{
	int		i;
	t_list	*tmp1;

	i = find_max_dex(*a);
	tmp1 = *a;
	while (tmp1->next)
		tmp1 = tmp1->next;
	while (tmp1)
	{
		if (tmp1->dex == i)
		{
			tmp1->dex = 0;
			i--;
		}
		tmp1 = tmp1->prev;
	}
}

void	push_not_lis(t_list **a, t_list **b)
{
	t_list *tmp1;

	tmp1 = *a;
	while (tmp1)
	{
		if (tmp1->dex != 0)
		{
			indexing(*a);
			elm_to_top(a);
			pb(a, b, 0);
			tmp1 = *a;
		}
		else
			tmp1 = tmp1->next;
	}
}

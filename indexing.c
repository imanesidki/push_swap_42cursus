/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:55:19 by isidki            #+#    #+#             */
/*   Updated: 2023/03/02 22:56:44 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int		i;
	int		c;
	t_list	*tmp2;

	c = 1;
	tmp1 = find_min_content(*a);
	tmp2 = tmp1->next;
	(!tmp2) && (tmp2 = *a);
	i = ft_lstsize(*a);
	while (i-- >= 0)
	{
		tmp1 = find_min_content(*a);
		while (c && tmp1->next && tmp1 != find_min_content(*a)->prev)
		{
			if (tmp2->content > tmp1->content && tmp2->dex < (tmp1->dex + 1))
				(tmp2->dex)++;
			tmp1 = tmp1->next;
			(!tmp1->next) && ((tmp1 = *a) && (c = 0));
		}
		tmp2 = tmp2->next;
		if (!tmp2)
			tmp2 = *a;
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

int	index_elm_b_in_a(int b, t_list *a)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		index;

	tmp2 = find_min_content(a);
	index = tmp2->index;
	tmp1 = find_max_content(a);
	if (tmp1->content > b)
	{
		tmp2 = tmp1;
		index = tmp2->index;
	}
	while (a)
	{
		if (a->content > b && a->content < tmp2->content)
		{
			tmp2 = a;
			index = a->index;
		}
		a = a->next;
	}
	return (index);
}

int	check_index(int index1, int index2)
{
	if (index1 >= 0 && index2 >= 0 && index1 >= index2)
		return (index1);
	if (index1 >= 0 && index2 >= 0 && index1 <= index2)
		return (index2);
	if (index1 <= 0 && index2 <= 0 && index1 <= index2)
		return (-index1);
	if (index1 <= 0 && index2 <= 0 && index1 >= index2)
		return (-index2);
	if (index1 <= 0 && index2 >= 0)
		return ((-index1) + index2);
	if (index1 >= 0 && index2 <= 0)
		return (index1 + (-index2));
	return (0);
}

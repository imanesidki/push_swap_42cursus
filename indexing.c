/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:55:19 by isidki            #+#    #+#             */
/*   Updated: 2023/02/13 02:01:53 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(int *array, int len)
{
	int		i;
	int		j;

	i = -1
	j = array[0];
	while (++i < len)
	{
		if (array[i] < array[i + 1])
			j = array[i + 1];
	}
	return (j);
}

int	find_min(t_list *a)
{
	t_list	*tmp;
	int		i;

	tmp = a;
	i = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (i > tmp->content)
			i = tmp->content;
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

void	min_to_top(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = find_min(*a);
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

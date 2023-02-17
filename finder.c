/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:55:59 by isidki            #+#    #+#             */
/*   Updated: 2023/02/17 13:32:38 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_min_content(t_list *a)
{
	t_list	*tmp;
	t_list	*min;
	int		i;

	tmp = a;
	i = tmp->content;
	min = tmp;
	tmp = tmp->next;
	while (tmp)
	{
		if (i > tmp->content)
		{
			i = tmp->content;
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	min_to_top(t_list **a)
{
	t_list	*tmp;
	t_list	*min;

	tmp = *a;
	min = find_min_content(*a);
	while (tmp)
	{
		if (tmp->index == 0 && tmp->content == min->content)
			return ;
		if (tmp->index > 0 && tmp->content == min->content)
		{
			while ((tmp->index)-- != 0)
				ra(a, 0);
		}
		else if (tmp->index < 0 && tmp->content == min->content)
		{
			while ((tmp->index)++ != 0)
				rra(a, 0);
		}
		tmp = tmp->next;
	}
}

int	find_max_content(t_list *a)
{
	t_list	*tmp;
	int		i;

	tmp = a;
	i = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (i < tmp->content)
			i = tmp->content;
		tmp = tmp->next;
	}
	return (i);
}

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

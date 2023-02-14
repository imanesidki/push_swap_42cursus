/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elm_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:55:59 by isidki            #+#    #+#             */
/*   Updated: 2023/02/14 01:48:53 by isidki           ###   ########.fr       */
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

void	elm_to_top(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->index == 0)
			return ;
		if (tmp->index > 0)
		{
			while ((tmp->index)-- != 0)
				ra(a, 0);
		}
		else if (tmp->index < 0)
		{
			while ((tmp->index)++ != 0)
				rra(a, 0);
		}
		tmp = tmp->next;
	}
}

int	find_min_content(t_list *a)
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

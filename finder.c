/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:55:59 by isidki            #+#    #+#             */
/*   Updated: 2023/02/14 22:14:20 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:18:14 by isidki            #+#    #+#             */
/*   Updated: 2023/02/12 18:45:02 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b, int c)
{
	t_list	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = NULL;
		ft_lstadd_front(a, tmp);
		if (c == 0)
			write (1, "pa\n", 3);
	}
}

void	pb(t_list **a, t_list **b, int c)
{
	t_list	*tmp;

	if (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_front(b, tmp);
		if (c == 0)
			write (1, "pb\n", 3);
	}
}

void	rra(t_list **a, int c)
{
	t_list	*parcour;
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		parcour = *a;
		while (parcour->next)
		{
			tmp = parcour;
			parcour = parcour->next;
		}
		ft_lstadd_front(a, parcour);
		tmp->next = NULL;
		if (c == 0)
			write (1, "rra\n", 4);
	}
}

void	rrb(t_list **b, int c)
{
	rra(b, 1);
	if (c == 0 && *b && (*b)->next)
		write (1, "rrb\n", 4);
}

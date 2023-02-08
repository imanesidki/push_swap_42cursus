/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:18:14 by isidki            #+#    #+#             */
/*   Updated: 2023/02/08 01:54:09 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *a, int c)
{

}

void	pb(t_list *b, int c)
{

}

void	rra(t_list **a, int c)
{
	t_list	*parcour;

	if (ft_lstsize(*a) >= 2) // TODO : optimize the code and check double pointers in args of functions in header.
	{
		parcour = *a;
		while (parcour->next)
			parcour = parcour->next;


	if (c == 0)
		write (1, "rra\n", 4);
	}
}

void	rrb(t_list **b, int c)
{
	rra(b, 1);
	if (c == 0 && ft_lstsize(b) >= 2)
		write (1, "rrb\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:57:51 by isidki            #+#    #+#             */
/*   Updated: 2023/02/07 21:29:10 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *a, int c)
{
	t_list	*parcour;

	parcour = a;
	if (ft_lstsize(a) >= 2)
	{
		while (parcour->next)
			parcour = parcour->next;
		parcour->next = a->next;          //a revoir
		parcour->prev->next = NULL;
	if (c == 0)
		write(1, "ra\n", 3);
	}
}

void	rb(t_list *b, int c)
{
	ra(b, 1);
	if (c == 0 && ft_lstsize(b) >= 2)
		write (1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b, int c)
{
	ra(a, 1);
	rb(b, 1);
	if (c == 0 && ft_lstsize(a) >= 2 && ft_lstsize(b) >= 2)
		write (1, "rr\n", 3);
}

// void	rrr(t_list *a, t_list *b, int c)
// {
// 	rra(a, 1);
// 	rrb(b, 1);
// 	if (c == 0 && ft_lstsize(a) >= 2 && ft_lstsize(b) >= 2)
// 		write (1, "rrr\n", 4);
// }

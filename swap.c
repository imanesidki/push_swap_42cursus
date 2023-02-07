/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:11:56 by isidki            #+#    #+#             */
/*   Updated: 2023/02/06 01:40:51 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a, int c)
{
	int	tmp;
	t_list	*parcour;

	parcour = a;
	if (lstsize(a) >= 2)
	{
	while (parcour->next->next)
	{
		tmp = parcour->content;
		parcour = parcour->next;
	}
	parcour->prev->content = parcour->content;
	parcour->content = tmp;
	if (c == 0)
		write (1, "sa\n", 3);
	}
}

void	sb(t_list *b, int c)
{
	sa(&b, 1);
	if (c == 0 && lstsize(b) >= 2)
		write (1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b, int c)
{
	swap_a(&a, 1);
	swap_b(&b, 1);
	if (c == 0 && lstsize(a) >= 2 && lstsize(b) >= 2)
		write (1, "ss\n", 3);
}

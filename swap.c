/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:11:56 by isidki            #+#    #+#             */
/*   Updated: 2023/02/12 15:52:08 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, int c)
{
	int	tmp;

	if (*a && (*a)->next)
	{
		tmp = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = tmp;
		if (c == 0)
			write (1, "sa\n", 3);
	}
}

void	sb(t_list **b, int c)
{
	sa(b, 1);
	if (c == 0 && *b && (*b)->next)
		write (1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b, int c)
{
	sa(a, 1);
	sb(b, 1);
	if (c == 0 && *a && (*a)->next && *b && (*b)->next)
		write (1, "ss\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:57:31 by isidki            #+#    #+#             */
/*   Updated: 2023/02/11 05:56:30 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static	find_max(t_list *a);
{
	t_list *tmp1;
	t_list *tmp2;
	int	i;

	tmp1 = a;
	tmp2 = a->next;
	i = tmp1->content;
	while (tmp1->next && tmp2)
	{
		if (i < tmp2->content)
			i = tmp2->content;
		tmp1 = tmp1->next; //a revoir
		tmp2 = tmp2->next;
	}
}

static	find_min(t_list *a);
{

}

bool	ft_sorted(t_list *a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (a)->next;
	tmp2 = a;
	while (tmp1 && tmp2->next)
	{
		if (tmp1->content < tmp2->content)
			return(false);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return(true);
}

void	sort3(t_list *a)
{

}

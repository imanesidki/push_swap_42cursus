/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:57:31 by isidki            #+#    #+#             */
/*   Updated: 2023/02/13 02:53:46 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_sorted(t_list *a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (a)->next;
	tmp2 = a;
	while (tmp1 && tmp2->next)
	{
		if (tmp1->content < tmp2->content)
			return (false);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (true);
}

void	sort3(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = find_max(*a);
	if (tmp->content == i)
		ra(a, 0);
	else if (tmp->next->content == i)
		rra(a, 0);
	tmp = *a;
	i = tmp->content;
	tmp = tmp->next;
	if (i > tmp->content)
		sa(a, 0);
}

void	sort5(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;
	int		j;

	i = 0;
	tmp = *a;
	j = ft_lstsize(*a);
	while (i < j - 3)
	{
		indexing(*a);
		show_elm(*a);
		min_to_top(a);
		pb(a, b, 0);
		i++;
	}
	sort3(a);
	while (*b)
		pa(a, b, 0);
}

// int	*tab(t_list **a)
// {
// 	int		*array;
// 	int		*index;
// 	int		*lis;
// 	t_list	*tmp;
// 	int		i;
// 	int		j;
// 	int		len;

// 	tmp = *a;
// 	i = -1;
// 	while (tmp)
// 	{
// 		array[++i] = tmp->content;
// 		index[i] = 1;
// 		tmp = tmp->next;
// 	}
// 	i = 0;
// 	while (++i < ft_lstsize(*a))
// 	{
// 		j = 0;
// 		if (array[i] > array[j] && index[i] < index[j] + 1)
// 			index[i]++;
// 	}
// 	len = find_max(array, ft_lstsize(*a));
// 	while (--len)
// 	{
// 		lis[len] =
// 	}
// 	return (lis);
// }

// void	LIS_sort(t_list **a, t_list **b)
// {

// }

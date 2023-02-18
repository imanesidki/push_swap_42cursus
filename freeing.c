/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:50:53 by isidki            #+#    #+#             */
/*   Updated: 2023/02/18 15:55:25 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_and_exit(t_list *a)
{
	while (a)
	{
		free(a);
		a = a->next;
	}
	exit (0);
}

void	free_all(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	ok(t_list **a, t_list **b)
{
	write (1, "OK\n", 3);
	ft_lstclear(a);
	ft_lstclear(b);
	exit (0);
}

void	ko(t_list **a, t_list **b)
{
	write (1, "KO\n", 3);
	ft_lstclear(a);
	ft_lstclear(b);
	exit (1);
}

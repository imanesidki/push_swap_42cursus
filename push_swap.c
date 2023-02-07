/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/06 02:36:51 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	printList(t_list *node) //it's a checking test to delete
{
	while (node != NULL)
	{
		printf("%d ", node->content);
		node = node->next;
	}
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	int		i;

	i = 0;
	if (ac == 1)
		exit(0);
	if (ac >= 2)
	{
		stack_a = parsing(ac, av);
		printList(*stack_a); //test to delete
	}
	return (0);
}

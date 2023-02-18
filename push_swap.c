/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/18 15:06:37 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		exit(0);
	if (ac >= 2)
	{
		stack_a = parsing(ac, av);
		if (ft_sorted(stack_a))
			free_and_exit(stack_a);
		if (ft_lstsize(stack_a) <= 3)
			sort3(&stack_a);
		else if (ft_lstsize(stack_a) <= 5)
			sort5(&stack_a, &stack_b);
		else
			lis_sort(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
	}
	return (0);
}

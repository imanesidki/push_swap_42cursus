/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/08 01:27:17 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_leaks()
// {
// 	system("leaks push_swap");
// }
int	main(int ac, char **av)
{
	// atexit(ft_leaks);
	t_list	*stack_a;
	int		i;

	i = 0;
	if (ac == 1)
		exit(0);
	if (ac >= 2)
	{
		stack_a = parsing(ac, av);
		show_elm(stack_a);
	}

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:30:01 by isidki            #+#    #+#             */
/*   Updated: 2023/03/01 23:42:40 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_line(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "ra"))
		ra(a, 1);
	else if (!ft_strcmp(line, "rb"))
		rb(b, 1);
	else if (!ft_strcmp(line, "rr"))
		rr(a, b, 1);
	else if (!ft_strcmp(line, "rra"))
		rra(a, 1);
	else if (!ft_strcmp(line, "rrb"))
		rrb(b, 1);
	else if (!ft_strcmp(line, "rrr"))
		rrr(a, b, 1);
	else if (!ft_strcmp(line, "pa"))
		pa(a, b, 1);
	else if (!ft_strcmp(line, "pb"))
		pb(a, b, 1);
	else
		swap_bon(a, b, line);
}

void	error_free(t_list **a, t_list **b, char *line)
{
	write(2, "Error", 6);
	free (line);
	ft_lstclear(a);
	ft_lstclear(b);
	exit (1);
}

void	swap_bon(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "sa"))
		sa(a, 1);
	else if (!ft_strcmp(line, "sb"))
		sb(b, 1);
	else if (!ft_strcmp(line, "ss"))
		ss(a, b, 1);
	else
		error_free(a, b, line);
}

void	get_lines(t_list **a, t_list **b, char *line)
{
	while (line)
	{
		check_line(a, b, line);
		free (line);
		line = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	char	*line;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		exit (0);
	else
	{
		stack_a = parsing(ac, av);
		line = get_next_line(0);
		get_lines(&stack_a, &stack_b, line);
		if (ft_sorted(stack_a) && !stack_b)
			ok(&stack_a, &stack_b);
		else
			ko(&stack_a, &stack_b);
	}
	return (0);
}

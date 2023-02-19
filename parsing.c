/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:53:39 by isidki            #+#    #+#             */
/*   Updated: 2023/02/19 08:19:01 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_err(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

void	check_digit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] != '-' && str[i] != '+'
			&& str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
			msg_err();
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] < '0' || str[i + 1] > '9'))
			msg_err();
	}
}

t_list	*stock_in_stack(char **array)
{
	t_list	*stack_a;
	int		i;

	i = -1;
	stack_a = NULL;
	while (array[++i])
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(array[i])));
	}
	return (stack_a);
}

t_list	*parsing(int ac, char **av)
{
	char	*str;
	char	**array;
	t_list	*stack_a;

	str = ft_strjoin(ac - 1, av + 1, ' ');
	check_digit(str);
	array = ft_split(str, ' ');
	free(str);
	stack_a = stock_in_stack(array);
	free_all(array);
	return (stack_a);
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
			return (false);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (true);
}

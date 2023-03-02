/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 02:53:39 by isidki            #+#    #+#             */
/*   Updated: 2023/03/02 22:46:22 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_err(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}

void	check_digit(char *str)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (str[++i])
	{
		if (ft_isdigit(str[i]))
			c++;
		if (str[i] != '-' && str[i] != '+'
			&& str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
			msg_err();
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] < '0' || str[i + 1] > '9'))
			msg_err();
		if (ft_isdigit(str[i]) && (str[i + 1] == '+' || str[i + 1] == '-'))
			msg_err();
	}
	if (c == 0)
		msg_err();
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
	array = ft_split(str, ' ');
	free(str);
	stack_a = stock_in_stack(array);
	free_all(array);
	return (stack_a);
}

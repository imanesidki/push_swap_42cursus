/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:30 by isidki            #+#    #+#             */
/*   Updated: 2023/02/06 01:28:01 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**parsing(int ac, char **av)
{
	char	*str;
	char	**array;
	t_list	**stack_a;

	str = ft_strjoin(ac, av, ' ');
	check_digit(str);
	array = ft_split(str, ' ');
	free(str);
	stack_a = stock_in_stack(array);
	free_all(array, 0);
	return (stack_a);
}

t_list	**stock_in_stack(char **array)
{
	t_list	**stack_a;
	int		i;

	i = 0;
	while (array[i++])
		lstadd_back(stack_a, lstnew(ft_atoi(array[i])));
	return (stack_a);
}

void	lstadd_back(t_list **lst, t_list *new)
{
	t_list	*parcour;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	parcour = *lst;
	while (parcour->next)
	{
		if (parcour->content == new->content)
		{
			free_all(lst, 0);
			msg_err();
		}
		parcour = parcour->next;
	}
	parcour->next = new;
}

t_list	*lstnew(int content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof (t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int	lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

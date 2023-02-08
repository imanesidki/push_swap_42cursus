/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:30 by isidki            #+#    #+#             */
/*   Updated: 2023/02/08 01:29:52 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_elm(t_list *a)
{
	printf("----------------------\n");     //to replace printf
	while (a)
	{
		printf("%d\n",a->content);
		a = a->next;
	}
	printf("----------------------\n");
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

void	ft_lstadd_back(t_list **lst, t_list *new)
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
			ft_lstclear(lst);
			msg_err();
		}
		parcour = parcour->next;
	}
	parcour->next = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof (t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int	ft_lstsize(t_list *lst)
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

void	ft_lstclear(t_list **lst)
{
	t_list	*parcour;
	t_list	*l;

	if (!lst)
		return ;
	parcour = *lst;
	while (parcour)
	{
		l = parcour;
		parcour = parcour->next;
		free (l);
	}
	*lst = NULL;
}

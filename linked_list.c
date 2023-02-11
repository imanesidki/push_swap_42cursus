/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:15:30 by isidki            #+#    #+#             */
/*   Updated: 2023/02/11 03:08:03 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*parcour;
	t_list *ptr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	parcour = *lst;
	while (parcour)
	{
		if (parcour->content == new->content)
		{
			ft_lstclear(lst);
			msg_err();
		}
		if(!parcour->next)
			ptr = parcour;
		parcour = parcour->next;
	}
	ptr->next = new;
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	*lst = new;
}

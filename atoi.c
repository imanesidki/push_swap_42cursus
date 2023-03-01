/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:32:00 by isidki            #+#    #+#             */
/*   Updated: 2023/03/02 00:11:41 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	long		n;
	int			sign;

	sign = 1;
	n = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (!*str)
		msg_err();
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if ((n * sign) > 2147483647 || (n * sign) < -2147483647)
		msg_err();
	return (n * sign);
}

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
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

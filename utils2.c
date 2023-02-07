/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:32:00 by isidki            #+#    #+#             */
/*   Updated: 2023/02/06 00:47:27 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	long		n;
	long		last;
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
	{
		last = n;
		n = n * 10 + *str++ - '0';
		if (last != n / 10 && sign == 1)
			msg_err();
		else if (last != n / 10 && sign == -1)
			msg_err();
	}
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

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
		if (str[i] != '-' && str[i] != '+'
			&& str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
			msg_err();
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] < '0' || str[i + 1] > '9'))
			msg_err();
	}
}

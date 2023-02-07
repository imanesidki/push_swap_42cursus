/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:10:57 by isidki            #+#    #+#             */
/*   Updated: 2023/02/07 23:19:09 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_err(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

static int	ft_total_len(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		if (strs[i][j] == '\0')
			msg_err();
		while (strs[i][j])
			j++;
		len += j + 1;
		i++;
	}
	return (len + (size - 1));
}

static char	*remplir(char *str, char **strs, int size, char sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		if (i < size - 1)
			str[k++] = sep;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char sep)
{
	int		total_len;
	char	*str;

	total_len = ft_total_len (size, strs);
	str = (char *) malloc (total_len);
	remplir (str, strs, size, sep);
	return (str);
}

t_list	*parsing(int ac, char **av)
{
	char	*str;
	char	**array;
	t_list	*stack_a;
	int	i = 0;

	str = ft_strjoin(ac - 1, av + 1, ' ');
	check_digit(str);
	array = ft_split(str, ' ');
	free(str);
	stack_a = stock_in_stack(array);
	free_all(array, 0);
	return (stack_a);
}

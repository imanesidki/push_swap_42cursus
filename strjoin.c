/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:10:57 by isidki            #+#    #+#             */
/*   Updated: 2023/02/19 13:21:16 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		check_digit(strs[i]);
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

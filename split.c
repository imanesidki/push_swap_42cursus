/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:34:38 by isidki            #+#    #+#             */
/*   Updated: 2023/02/18 17:14:26 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_nums(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i])
		if (str[i] != c && (str[i + 1] == c || !str[i + 1]))
			count++;
	return (count);
}

char	*ft_strdup(char *source)
{
	char	*dst;
	int		i;
	int		j;

	i = ft_strlen(source);
	j = 0;
	dst = (char *) malloc(i + 1);
	if (!dst)
		return (NULL);
	while (j++ < i)
		dst[j] = source[j];
	dst[i] = '\0';
	return (dst);
}

static char	*ft_substr(char *s, int start, int len)
{
	char	*sub;
	int		i;
	int		srclen;

	if (!s)
		return (NULL);
	srclen = ft_strlen(s);
	i = -1;
	if (start >= srclen)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *) malloc(len + 1);
	if (!sub)
		return (NULL);
	while (++i < len && start[s] && start < srclen)
		*(sub + i) = *(s + start + i);
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		l;

	i = 0;
	l = -1;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_nums(s, c) + 1));
	if (!str)
		return (NULL);
	while (++l < count_nums(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		str[l] = ft_substr(s, j, i - j);
		if (!str[l])
			return (free_all(str), NULL);
	}
	return (str[l] = NULL, str);
}

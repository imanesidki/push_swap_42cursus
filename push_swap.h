/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:38 by isidki            #+#    #+#             */
/*   Updated: 2023/02/06 02:34:14 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void		sa(t_list *a, int c);
void		sb(t_list *b, int c);
void		ss(t_list *a, t_list *b, int c);
void		ra(t_list *a, int c);
void		rb(t_list *b, int c);
void		rra(t_list *a, int c);
void		rrb(t_list *b, int c);
void		rrr(t_list *a, t_list *b, int c);
void		rr(t_list *a, t_list *b, int c);
void		pa(t_list *a, int c);
void		pb(t_list *b, int c);
void		msg_err(void);
t_list		**parsing(int ac, char **av);
void		check_digit(char *str);
char		*ft_strjoin(int size, char **strs, char sep);
char		**ft_split(char *s, char c);
int			ft_strlen(char *str);
int			ft_atoi(char *str);
void		free_all(char **str, int j);
t_list		**stock_in_stack(char **array);
void		lstadd_back(t_list **lst, t_list *new);
t_list		*lstnew(int content);
int			lstsize(t_list *lst);

#endif

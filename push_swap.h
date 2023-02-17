/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:38 by isidki            #+#    #+#             */
/*   Updated: 2023/02/17 13:42:10 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list
{
	int				index;
	int				content;
	int				dex;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

/**********************************************/
/************push_swap_operations**************/

/************swap***********/

void		sa(t_list **a, int c);
void		sb(t_list **b, int c);
void		ss(t_list **a, t_list **b, int c);

/**********rotate**********/

void		ra(t_list **a, int c);
void		rb(t_list **b, int c);
void		rra(t_list **a, int c);
void		rrb(t_list **b, int c);
void		rrr(t_list **a, t_list **b, int c);
void		rr(t_list **a, t_list **b, int c);

/***********push***********/

void		pa(t_list **a, t_list **b, int c);
void		pb(t_list **a, t_list **b, int c);

/***********************************************/
/*******************Utils***********************/

char		*ft_strjoin(int size, char **strs, char sep);
char		**ft_split(char *s, char c);
int			ft_atoi(char *str);
int			ft_strlen(char *str);

/*************************************************/
/*****************linked_list_operations**********/

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstnew(int content);
void		ft_lstclear(t_list **lst);
int			ft_lstsize(t_list *lst);

/*************************************************/
/*******************parsing***********************/

t_list		*parsing(int ac, char **av);
void		check_digit(char *str);
void		msg_err(void);
t_list		*stock_in_stack(char **array);

/*************************************************/
/*******************freeing***********************/

void		free_all(char **str);
void		free_and_exit(t_list *a);

/*************************************************/
/*******************sorting***********************/

bool		ft_sorted(t_list *a);
void		sort3(t_list **a);
void		sort5(t_list **a, t_list **b);
void		lis_sort(t_list **a, t_list **b);
void		push_not_lis(t_list **a, t_list **b);
void		push_back_to_a(t_list **a, t_list **b);

/*************************************************/
/*************indexing_stack****************/

void		indexing(t_list *a);
void		dexing(t_list **a);
void		set_dex_lis_tozero(t_list **a);
int			index_elm_b_in_a(int b, t_list *a);
int			check_index(int index1, int index2);

/************************************************/
/*******************moves***********************/

void		elm_to_top(t_list **a, int i);
void		min_to_top(t_list **a);
t_list		*min_total_moves(t_list **a, t_list **b);
void		elm_to_top_ab(t_list **a, t_list **b, int indexa, int indexb);
void		same_index_ab_pos(t_list **a, t_list **b, int indexa, int indexb);
void		same_index_ab_neg(t_list **a, t_list **b, int indexa, int indexb);
void		diff_index_ab_1(t_list **a, t_list **b, int indexa, int indexb);
void		diff_index_ab_2(t_list **a, t_list **b, int indexa, int indexb);

/***********************************************/
/*******************find_elment*****************/

t_list		*find_min_content(t_list *a);
int			find_max_content(t_list *a);
int			find_max_dex(t_list *a);
void		show_stack(t_list *a);   //remove

/************************************************/

#endif

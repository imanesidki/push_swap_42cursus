/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:38 by isidki            #+#    #+#             */
/*   Updated: 2023/02/18 19:29:05 by isidki           ###   ########.fr       */
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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

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
/*************indexing_stack*********************/

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
t_list		*find_max_content(t_list *a);
int			find_max_dex(t_list *a);
void		show_stack(t_list *a);   //remove

/************************************************/
/*****************bonus_checker******************/

void		get_lines(t_list **a, t_list **b, char *line);
void		check_line(t_list **a, t_list **b, char *line);
void		swap_bon(t_list **a, t_list **b, char *line);
void		error_free(t_list **a, t_list **b, char *line);
void		ok(t_list **a, t_list **b);
void		ko(t_list **a, t_list **b);

/************************************************/
/*************get_next_line_for_bonus************/

char		*read_buff(int fd, char *hold);
char		*update(char *hold);
char		*mygetline(char *hold);
char		*get_next_line(int fd);
char		*ft_strchr(char *string, int c);
int			ft_strcmp(char *first, char *second);
char		*ft_strjoin_strings(char *s1, char *s2);
char		*ft_substrs(char *s, unsigned int start, int len);
char		*ft_strdup(char *source);

#endif

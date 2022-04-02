/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:54:25 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/27 15:56:07 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1

typedef struct list
{
	int			data;
	struct list	*next;
}	t_list;

long long	ft_atoi(const	char	*str);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstnew(int content);
void		rra(t_list **head, int k);
void		rrb(t_list **head, int k);
void		ra(t_list **head, int k);
void		rb(t_list **head, int k);
void		rr(t_list **head, t_list **stack_b);
void		pa(t_list **old, t_list **new);
void		pb(t_list **old, t_list **new);
void		sa(t_list **g, int k);
void		ss(t_list *g, t_list *b);
void		sb(t_list *g, int k);
void		rrr(t_list **head, t_list **scd_head);
void		duplicate(char **av);
int			lst_size(t_list *head);
void		sort_3(t_list **head);
int			index_of_smallest(t_list *head);
void		move_to_top(int index, int size, t_list **head);
void		sort_a_lot(t_list **stack_a, t_list **stack_b, int d);
void		move_to_top_b(int index, int size, t_list **head);
int			max_value(t_list *stack_b);
int			max_num_index(t_list *stack_b);
int			wanted_min_num(t_list *satck_a, int n);
void		push_biggest_back(t_list **stack_a, t_list **stack_b);
int			sorted(t_list *stack_a);
void		sort_5_4(t_list **head, t_list *stack_b);
char		*get_next_line(int fd);
void		operation(char *tab, t_list **stack_a, t_list **stack_b);
int			ft_correction(t_list *stack_a);
int			ft_strlen(char *s);
size_t		ft_strchr(char *buffer);
char		*ft_substr(char *s, int start, int len);
char		*ft_strdup(const char	*s1);
char		*ft_strjoin(char	*s1, char	*s2);
void		destiny(t_list *stack_a, t_list *stack_b);
void		pa_bs(t_list **old, t_list **new);
void		pb_bs(t_list **old, t_list **new);
void		sa_bs(t_list **g, int k);
void		sb_bs(t_list *g, int k);
void		ss_bs(t_list *g, t_list *b);
void		ra_bs(t_list **head, int k);
void		rb_bs(t_list **head, int k);
void		rr_bs(t_list **head, t_list **stack_b);
void		rra_bs(t_list **head, int k);
void		rrb_bs(t_list **head, int k);
void		rrr_bs(t_list **head, t_list **scd_head);

#endif

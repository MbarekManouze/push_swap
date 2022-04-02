/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:35:34 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/26 11:41:19 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	rra(t_list **head, int k)
{
	t_list	*end_lst;
	t_list	*scend_lst;

	if (lst_size(*head) == 1 || lst_size(*head) == 0)
		return ;
	end_lst = *head;
	scend_lst = NULL;
	while (end_lst->next)
	{
		scend_lst = end_lst;
		end_lst = end_lst->next;
	}
	scend_lst->next = NULL;
	end_lst->next = *head;
	*head = end_lst;
	if (k == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list **head, int k)
{
	t_list	*end_lst;
	t_list	*scend_lst;

	if (lst_size(*head) == 1 || lst_size(*head) == 0)
		return ;
	end_lst = *head;
	scend_lst = NULL;
	while (end_lst->next)
	{
		scend_lst = end_lst;
		end_lst = end_lst->next;
	}
	scend_lst->next = NULL;
	end_lst->next = *head;
	*head = end_lst;
	if (k == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **head, t_list **scd_head)
{
	rra(head, 0);
	rrb(scd_head, 0);
}

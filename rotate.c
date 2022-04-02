/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:39:01 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/26 11:31:16 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ra(t_list **head, int k)
{
	t_list	*scnd_head;
	t_list	*first;

	if (lst_size(*head) == 1 || lst_size(*head) == 0)
		return ;
	first = *head;
	*head = (*head)->next;
	scnd_head = *head;
	while (scnd_head->next)
	{
		scnd_head = scnd_head->next;
	}
	scnd_head->next = first;
	first->next = NULL;
	if (k == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **head, int k)
{
	t_list	*scnd_head;
	t_list	*first;

	if (lst_size(*head) == 1 || lst_size(*head) == 0)
		return ;
	first = *head;
	*head = (*head)->next;
	scnd_head = *head;
	while (scnd_head->next)
	{
		scnd_head = scnd_head->next;
	}
	scnd_head->next = first;
	first->next = NULL;
	if (k == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **head, t_list **stack_b)
{
	ra(head, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

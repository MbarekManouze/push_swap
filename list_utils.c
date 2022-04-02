/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:15:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/25 18:20:11 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	sorted(t_list *stack_a)
{
	t_list	*hold;

	hold = stack_a;
	while (hold->next)
	{
		if (hold->data > hold->next->data)
			return (0);
		hold = hold->next;
	}
	return (1);
}

int	lst_size(t_list *head)
{
	int		i;
	t_list	*hold;

	hold = head;
	i = 0;
	while (hold)
	{
		hold = hold->next;
		i++;
	}
	return (i);
}

int	index_of_smallest(t_list *head)
{
	int		i;
	int		k;
	int		tmp;
	t_list	*hold;

	i = 0;
	hold = head;
	tmp = head->data;
	while (hold)
	{
		if (hold->data < tmp)
		{
			tmp = hold->data;
			k = i;
		}
		i++;
		hold = hold->next;
	}
	return (k);
}

void	move_to_top(int index, int size, t_list **head)
{
	if (index <= (size / 2))
	{
		while (index > 0)
		{
			ra(head, 1);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rra(head, 1);
			index++;
		}
	}
}

void	move_to_top_b(int index, int size, t_list **head)
{
	if (index <= (size / 2))
	{
		while (index > 0)
		{
			rb(head, 1);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rrb(head, 1);
			index++;
		}
	}
}

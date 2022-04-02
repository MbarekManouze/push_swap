/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:15:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/22 18:19:06 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	sorted(t_list *stack_a)
{
	t_list	*hold;

	if (stack_a == NULL)
		return (0);
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

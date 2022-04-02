/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:38:44 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/15 14:39:21 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

int	max_num_index(t_list *stack_b)
{
	int		i;
	int		j;
	int		k;
	t_list	*hold;

	hold = stack_b;
	i = 0;
	j = hold->data;
	while (hold)
	{
		if (hold->data > j)
		{
			j = hold->data;
			k = i;
		}
		i++;
		hold = hold->next;
	}
	return (k);
}

int	max_value(t_list *stack_b)
{
	int		j;
	t_list	*hold;

	hold = stack_b;
	j = hold->data;
	while (hold)
	{
		if (hold->data > j)
			j = hold->data;
		hold = hold->next;
	}
	return (j);
}

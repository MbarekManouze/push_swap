/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:32:28 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/13 14:43:07 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	pb(t_list **old, t_list **new)
{
	t_list	*lawyer;

	if (*old == NULL)
		return ;
	lawyer = *old;
	*old = (*old)->next;
	lawyer->next = *new;
	*new = lawyer;
	write(1, "pb\n", 3);
}

void	pa(t_list **old, t_list **new)
{
	t_list	*lawyer;

	if (*old == NULL)
		return ;
	lawyer = *old;
	*old = (*old)->next;
	lawyer->next = *new;
	*new = lawyer;
	write(1, "pa\n", 3);
}

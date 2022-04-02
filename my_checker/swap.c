/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:41:18 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/26 11:40:07 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	sa(t_list **g, int k)
{
	int	u;

	if (lst_size(*g) == 1 || lst_size(*g) == 0)
		return ;
	u = (*g)->next->data;
	(*g)->next->data = (*g)->data;
	(*g)->data = u;
	if (k == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list *g, int k)
{
	int	u;

	if (lst_size(g) == 1 || lst_size(g) == 0)
		return ;
	u = g->data;
	g->data = g->next->data;
	g->next->data = u;
	if (k == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list *g, t_list *b)
{
	sa(&g, 0);
	sb(b, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:58:44 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/25 15:54:42 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	sort_arr(int *a, int n)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			j++;
		}
		i++;
	}
}

int	arr_env(t_list *stack_a, int i, int d)
{
	int		*a;
	t_list	*tmp;
	int		k;
	int		c;

	k = 0;
	tmp = stack_a;
	a = malloc(i * (sizeof(int)));
	while (k < i)
	{
		a[k] = tmp->data;
		tmp = tmp->next;
		k++;
	}
	sort_arr(a, i);
	c = a[(i / d) + 1];
	free(a);
	return (c);
}

int	wanted_min_num(t_list *satck_a, int n)
{
	t_list	*hold;
	int		i;

	i = 0;
	hold = satck_a;
	while (hold)
	{
		if (hold->data < n)
			return (i);
		hold = hold->next;
		i++;
	}
	return (i);
}

void	push_biggest_back(t_list **stack_a, t_list **stack_b)
{
	while (lst_size(*stack_b))
	{
		if ((*stack_b)->data == max_value(*stack_b))
			pa(stack_b, stack_a);
		else
			move_to_top_b(max_num_index(*stack_b), lst_size(*stack_b), stack_b);
		if ((*stack_b)->next == NULL)
			break ;
	}
	pa(stack_b, stack_a);
}

void	sort_a_lot(t_list **stack_a, t_list **stack_b, int d)
{
	int	n;
	int	l;

	l = lst_size(*stack_a);
	n = arr_env(*stack_a, lst_size(*stack_a), d);
	while (l >= 0)
	{
		if ((*stack_a)->data < n)
			pb(stack_a, stack_b);
		else
			move_to_top(wanted_min_num(*stack_a, n), l, stack_a);
		l--;
		if ((*stack_a)->next == NULL)
			break ;
		if (l == 0)
		{
			l = lst_size(*stack_a);
			n = arr_env(*stack_a, lst_size(*stack_a), d);
		}
	}
	push_biggest_back(stack_a, stack_b);
}

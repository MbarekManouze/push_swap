/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:19:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/29 18:30:29 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	sort_5_4(t_list **head, t_list *stack_b)
{
	int	i;
	int	smallest;
	int	size;

	smallest = index_of_smallest(*head);
	size = lst_size(*head);
	i = 2;
	while (i > 0)
	{
		move_to_top(smallest, size, head);
		pb(head, &stack_b);
		smallest = index_of_smallest(*head);
		size = lst_size(*head);
		i--;
	}
	if (lst_size(*head) == 2 && (*head)->data > (*head)->next->data)
		sa(head, 1);
	else if (lst_size(*head) == 3)
		sort_3(head);
	pa(&stack_b, head);
	pa(&stack_b, head);
}

void	sort_3(t_list **head)
{
	t_list	*h;

	h = *head;
	if (h->data < h->next->data && h->next->data < h->next->next->data)
		return ;
	else if (h->data < h->next->data && h->data < h->next->next->data)
	{
		sa(head, 1);
		ra(head, 1);
	}
	else if (h->data > h->next->data && h->next->data > h->next->next->data)
	{
		sa(head, 1);
		rra(head, 1);
	}
	else if (h->data > h->next->data && h->data < h->next->next->data)
		sa(head, 1);
	else if (h->data < h->next->data && h->data > h->next->next->data)
		rra(head, 1);
	else if (h->data > h->next->data && h->next->data < h->next->next->data)
		ra(head, 1);
}

void	start(t_list **stack_a, t_list **stack_b)
{
	int	d;

	if (lst_size(*stack_a) < 250)
		d = 4;
	else
		d = 7;
	if (sorted(*stack_a))
		exit(0);
	if (lst_size(*stack_a) == 2)
		sa(stack_a, 1);
	if (lst_size(*stack_a) == 3)
		sort_3(stack_a);
	if (lst_size(*stack_a) == 5 || lst_size(*stack_a) == 4)
		sort_5_4(stack_a, *stack_b);
	if (lst_size(*stack_a) > 5)
		sort_a_lot(stack_a, stack_b, d);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*new;

	if (ac == 1)
		exit(1);
	stack_b = NULL;
	stack_a = NULL;
	duplicate(av + 1);
	while (ac > 1)
	{
		new = ft_lstnew(ft_atoi(av[ac - 1]));
		ft_lstadd_front(&stack_a, new);
		ac--;
	}
	start(&stack_a, &stack_b);
	return (0);
}

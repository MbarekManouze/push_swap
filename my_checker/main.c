/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:19:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/26 10:32:43 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	check(t_list **stack_a, t_list **stack_b, char *tab)
{
	while (tab)
	{
		operation(tab, stack_a, stack_b);
		tab = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*new;
	char	*tab;

	if (ac == 1)
		exit(1);
	stack_b = NULL;
	duplicate(av + 1);
	tab = get_next_line(0);
	while (ac > 1)
	{
		new = ft_lstnew(ft_atoi(av[ac - 1]));
		ft_lstadd_front(&stack_a, new);
		ac--;
	}
	check(&stack_a, &stack_b, tab);
	destiny(stack_a, stack_b);
	return (0);
}

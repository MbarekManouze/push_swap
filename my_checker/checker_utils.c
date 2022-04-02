/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:00:28 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/25 19:06:00 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	ft_strncmp(char	*s1, const char	*s2, size_t	n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*ssr;

	str = (unsigned char *)s1;
	ssr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while ((str[i] && ssr[i]) && str[i] == ssr[i] && i < n - 1)
		i++;
	return (str[i] - ssr[i]);
}

void	ft_exit(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	operation(char *tab, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strncmp(tab, "pa\n", 3))
		pa(stack_b, stack_a);
	else if (!ft_strncmp(tab, "pb\n", 3))
		pb(stack_a, stack_b);
	else if (!ft_strncmp(tab, "sa\n", 3))
		sa(stack_a, 0);
	else if (!ft_strncmp(tab, "sb\n", 3))
		sb(*stack_b, 0);
	else if (!ft_strncmp(tab, "ss\n", 3))
		ss(*stack_a, *stack_b);
	else if (!ft_strncmp(tab, "ra\n", 3))
		ra(stack_a, 0);
	else if (!ft_strncmp(tab, "rb\n", 3))
		rb(stack_b, 0);
	else if (!ft_strncmp(tab, "rr\n", 3))
		rr(stack_a, stack_b);
	else if (!ft_strncmp(tab, "rra\n", 4))
		rra(stack_a, 0);
	else if (!ft_strncmp(tab, "rrb\n", 4))
		rrb(stack_b, 0);
	else if (!ft_strncmp(tab, "rrr\n", 4))
		rrr(stack_a, stack_b);
	else
		ft_exit();
}

void	destiny(t_list *stack_a, t_list *stack_b)
{
	if (sorted(stack_a) == 1 && stack_b == NULL)
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	else if (sorted(stack_a) == 0 || stack_b != NULL)
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

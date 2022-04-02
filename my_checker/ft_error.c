/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:33:35 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/25 18:36:21 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

int	ft_other_err(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '-')
		i++;
	if (ft_atoi(av) >= 2147483647 || ft_atoi(av) <= -2147483648)
		return (1);
	while (av[i])
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	duplicate(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (ft_other_err(av[i]))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		while (i != j)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

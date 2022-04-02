/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:30:11 by mmanouze          #+#    #+#             */
/*   Updated: 2022/03/26 12:14:30 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

long long	ft_atoi(const	char *str)
{
	int			i;
	int			p;
	long long	n;

	p = 1;
	i = 0;
	if (str[i] == '-')
	{
		p = -1;
		i = 1;
	}
	n = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * p);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->data = content;
	new->next = NULL;
	return (new);
}

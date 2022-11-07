/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:17:05 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:17:07 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft/libft.h"
#include	"push_swap.h"

void	ft_triage(t_stack *sort)
{
	if (sort->cola_size == 2)
		ft_sa(sort, 0);
	else if (sort->cola_size == 3)
		ft_trois(sort);
	else if (sort->cola_size <= 5)
		ft_gerer_cinque(sort, sort->cola_size);
	else
		ft_sort_big(sort);
}

void	ft_trois(t_stack *sort)
{
	if (sort->cola[1] < sort->cola[0] && sort->cola[1] < sort->cola[2])
	{
		if (sort->cola[0] < sort->cola[2])
			ft_sa(sort, 0);
		else
			ft_ra(sort, 0);
	}
	else if (sort->cola[1] > sort->cola[0] && sort->cola[1] > sort->cola[2])
	{
		if (sort->cola[0] > sort->cola[2])
			ft_rra(sort, 0);
		else
		{
			ft_sa(sort, 0);
			ft_ra(sort, 0);
		}
	}
	else
	{
		ft_ra(sort, 0);
		ft_sa(sort, 0);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cinque.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:34:18 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:34:20 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../push_swap.h"
#include	"../libft/libft.h"

void	ft_nb_to_top(t_stack *sort, int nb, int pos)
{
	while (sort->cola[0] != nb)
	{
		if (pos <= 2)
			ft_ra(sort, 0);
		else
			ft_rra(sort, 0);
	}
	ft_pb(sort);
}

void	ft_find_lowest(t_stack *sort)
{
	int	lowest;
	int	pos;
	int	i;

	i = 0;
	lowest = 2147483647;
	while (i < sort->cola_size)
	{
		if (sort->cola[i] < lowest)
		{
			lowest = sort->cola[i];
			pos = i;
		}
		i++;
	}
	ft_nb_to_top(sort, lowest, pos);
}

void	ft_find_highest(t_stack *sort)
{
	int	highest;
	int	pos;
	int	i;

	i = 0;
	highest = -2147483647 - 1;
	while (i < sort->cola_size)
	{
		if (sort->cola[i] > highest)
		{
			highest = sort->cola[i];
			pos = i;
		}
		i++;
	}
	ft_nb_to_top(sort, highest, pos);
}

void	ft_gerer_cinque(t_stack *sort, int x)
{
	ft_find_lowest(sort);
	if (x == 5)
		ft_find_highest(sort);
	if (!(ft_ordre(sort)))
		ft_trois(sort);
	if (x == 5)
	{
		ft_pa(sort);
		ft_ra(sort, 0);
	}
	ft_pa(sort);
}

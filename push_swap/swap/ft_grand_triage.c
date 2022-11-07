/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grand_triage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:56:27 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:56:30 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../push_swap.h"
#include	"../libft/libft.h"
#include	<stdlib.h>

void	ft_clear_b(t_stack *sort)
{
	while (sort->colb_size != 0)
		ft_pa(sort);
}

void	ft_check_bin(int nb, int check, t_stack *sort)
{
	int	d;

	d = nb >> check;
	if (d & 1)
		ft_ra(sort, 0);
	else
		ft_pb(sort);
}

void	ft_first_sort(t_stack *sort)
{
	int	i;
	int	j;
	int	pos;
	int	lowest;
	int	last_lowest;

	i = 1;
	last_lowest = -2147483647 - 1;
	sort->radix = ft_calloc(sizeof(int), sort->cola_size);
	while (i <= sort->cola_size)
	{
		j = 0;
		lowest = 2147483647;
		while (j < sort->cola_size)
		{
			if (sort->cola[j] < lowest && sort->cola[j] > last_lowest)
			{
				lowest = sort->cola[j];
				pos = j;
			}
			j++;
		}
		last_lowest = lowest;
		sort->radix[pos] = i++;
	}
}

void	ft_sort_big(t_stack *sort)
{
	int	i;
	int	j;

	i = 0;
	while ((!(ft_ordre(sort))))
	{
		j = 0;
		ft_first_sort(sort);
		while (j < sort->max_size)
		{
			ft_check_bin(sort->radix[j], i, sort);
			j++;
		}
		free(sort->radix);
		ft_clear_b(sort);
		i++;
	}
}

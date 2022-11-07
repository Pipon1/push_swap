/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:34 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:25:38 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../push_swap.h"
#include	"../libft/libft.h"

void	ft_pa(t_stack *sort)
{
	if (sort->colb_size > 0)
	{
		sort->cola[sort->cola_size] = sort->colb[0];
		sort->cola_size++;
		ft_rra(sort, 1);
		ft_rb(sort, 1);
		sort->colb_size--;
		ft_printf("pa\n");
	}
}

void	ft_pb(t_stack *sort)
{
	if (sort->cola_size > 0)
	{
		sort->colb[sort->colb_size] = sort->cola[0];
		sort->colb_size++;
		ft_rrb(sort, 1);
		ft_ra(sort, 1);
		sort->cola[sort->cola_size - 1] = '\0';
		sort->cola_size--;
		ft_printf("pb\n");
	}
}

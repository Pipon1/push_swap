/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:21:50 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:21:56 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../push_swap.h"
#include	"../libft/libft.h"

void	ft_sa(t_stack *sort, int is_rotate)
{
	int	tmp;

	if (sort->cola_size > 1)
	{
		tmp = sort->cola[0];
		sort->cola[0] = sort->cola[1];
		sort->cola[1] = tmp;
		if (is_rotate == 0)
			ft_printf("sa\n");
	}
}

void	ft_sb(t_stack *sort, int is_rotate)
{
	int	tmp;

	if (sort->colb_size > 1)
	{
		tmp = sort->colb[0];
		sort->colb[0] = sort->colb[1];
		sort->colb[1] = tmp;
		if (is_rotate == 0)
			ft_printf("sb\n");
	}
}

void	ft_ss(t_stack *sort)
{
	ft_sa(sort, 0);
	ft_sb(sort, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:30:12 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:30:14 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../push_swap.h"
#include	"../libft/libft.h"

void	ft_ra(t_stack *sort, int is_push)
{
	int	i;
	int	tmp;

	if (sort->cola_size == 2)
		ft_sa(sort, 1);
	else if (sort->cola_size > 2)
	{
		i = 0;
		tmp = sort->cola[0];
		while (i < sort->cola_size - 1)
		{
			sort->cola[i] = sort->cola[i + 1];
			i++;
		}
		sort->cola[i] = tmp;
	}
	if (is_push == 0)
		ft_printf("ra\n");
}

void	ft_rb(t_stack *sort, int is_push)
{
	int	tmp;
	int	i;

	if (sort->colb_size == 2)
		ft_sb(sort, 1);
	else if (sort->colb_size > 2)
	{
		i = 0;
		tmp = sort->colb[0];
		while (i < sort->colb_size - 1)
		{
			sort->colb[i] = sort->colb[i + 1];
			i++;
		}
		sort->colb[i] = tmp;
	}
	if (is_push == 0)
		ft_printf("rb\n");
}

void	ft_rr(t_stack *sort)
{
	ft_ra(sort, 0);
	ft_rb(sort, 0);
}

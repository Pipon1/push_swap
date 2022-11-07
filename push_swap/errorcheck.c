/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:09:35 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 15:09:37 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"push_swap.h"
#include	"libft/libft.h"
#include	<stdlib.h>

void	ft_doublon(t_stack *sort, int i)
{
	int	check;

	check = sort->cola[i];
	while (i != 0)
	{
		if (check == sort->cola[--i])
			ft_exit(sort);
	}
}

int	ft_ordre(t_stack *sort)
{
	int	i;

	i = 0;
	while (i < sort->cola_size - 1)
	{
		if (sort->cola[i] > sort->cola[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_exit(t_stack *sort)
{
	ft_putstr_fd("Error\n", 2);
	free(sort->cola);
	free(sort->colb);
	exit(0);
}

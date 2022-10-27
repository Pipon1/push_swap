/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:08:52 by hefurrer          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:55 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"ft_push_swap.h"
#include	"libft/libft.h"

void	testprint(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d\n", arr[i]);
		i++;
	}
	ft_printf("___\n");
}

void	ft_movemed(int *arr, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		if (arr[0] > arr[1] || arr[1] > arr[size - 1])
		{
			tmp = arr[0];
			arr[0] = arr[1];
			arr[1] = tmp;
			ft_printf("sa\n");
		}
		if (arr[2] > arr[size - 1] || arr[1] > arr[size - 1])
		{
			tmp = arr[0];
			arr[0] = arr[size - 1];
			arr[size - 1] = tmp;
			ft_printf("rra\n");
		}
		i++;
	}
}

int	ft_findmin(int *arr, int size)
{
	int	i;
	int	min;

	min = arr[0];
	i = 0;
	while (i < size)
	{
		if (min > arr[i])
		{
			min = arr[i];
			i = -1;
		}
		i++;
	}
	return (min);
}

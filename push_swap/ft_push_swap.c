/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:40:16 by hefurrer          #+#    #+#             */
/*   Updated: 2022/10/27 09:40:19 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft/libft.h"
#include	"ft_push_swap.h"
//sommet de la pile = param [0]

int isinorder(int size, int *arr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[i + 1] && (i + 1) < size)
			return (0);
		i++;
	}
	return (1);
}

int	checkfordoublon(int size, int *arr)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		tmp = arr[i];
		while (j < size)
		{
			if (tmp == arr[j] && j != i)
			{
				ft_printf("Error\n");
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	simplecase(int size, int *arr)
{
	int	tmp;
	
	tmp = 0;
	if (size == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (size == 2)
	{
		if (arr[0] > arr[1])
		{
			tmp = arr[0];
			arr[0] = arr[1];
			arr[1] = tmp;
			ft_printf("sa\n");
		}
	}
	return (1);
}

int	ft_push_swap(int *arr, int size)
{
	int min;

	if (isinorder(size, arr))
		return (1);
	if (checkfordoublon(size, arr))
	{
		if (size < 3)
			if (!simplecase(size, arr))
				return (0);
		min = ft_findmin(arr, size);
		ft_movemed(arr, size);
	}
	else
		return (0);
	testprint(arr, size);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:08:37 by hefurrer          #+#    #+#             */
/*   Updated: 2022/10/27 11:36:58 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft/libft.h"
#include	<stdlib.h>
#include	"ft_push_swap.h"

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	*res;

	j = 0;
	res = malloc(sizeof(int) * (ac - 1));
	if (!res)
		return (1);
	i = 1;
	while (i < ac)
	{
		res[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	ft_push_swap(res, ac - 1);
	return (0);
}

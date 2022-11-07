/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:04 by hefurrer          #+#    #+#             */
/*   Updated: 2022/11/07 16:17:37 by hefurrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"push_swap.h"
#include	"libft/libft.h"
#include	<stdlib.h>

int	ft_pointer_size(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

void	ft_init_stack(t_stack *sort, char **str, int c)
{
	int		i;
	int		nb_arg;
	long	tmp;

	i = 0;
	nb_arg = ft_pointer_size(str);
	sort->cola_size = nb_arg - c;
	sort->max_size = sort->cola_size;
	sort->colb_size = 0;
	sort->cola = ft_calloc(sizeof(int), sort->cola_size);
	sort->colb = ft_calloc(sizeof(int), sort->cola_size);
	while (i < sort->cola_size)
	{
		if (!(ft_isalldigit(str[i + c])))
			ft_exit(sort);
		tmp = ft_atoi_long(str[i + c]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_exit(sort);
		sort->cola[i] = tmp;
		ft_doublon(sort, i);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	sort;
	char	**str;

	if (argc >= 2)
	{
		if (argc == 2)
		{
			str = ft_split(argv[1], ' ');
			ft_init_stack(&sort, str, 0);
		}
		else
			ft_init_stack(&sort, argv, 1);
		if (!(ft_ordre(&sort)))
			ft_triage(&sort);
		free(sort.cola);
		free(sort.colb);
	}
	return (0);
}

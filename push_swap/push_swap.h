
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*cola;
	int	*colb;
	int	*radix;
	int	cola_size;
	int	colb_size;
	int	max_size;
}		t_stack;

//function

void	ft_exit(t_stack *sort);
int		ft_ordre(t_stack *sort);
void	ft_doublon(t_stack *sort, int i);
void	ft_trois(t_stack *sort);
void	ft_triage(t_stack *sort);
void	ft_ss(t_stack *sort);
void	ft_sb(t_stack *sort, int is_rotate);
void	ft_sa(t_stack *sort, int is_rotate);
void	ft_pb(t_stack *sort);
void	ft_pa(t_stack *sort);
void	ft_rra(t_stack *sort, int is_push);
void	ft_rrb(t_stack *sort, int is_push);
void	ft_rrr(t_stack *sort);
void	ft_rr(t_stack *sort);
void	ft_rb(t_stack *sort, int is_push);
void	ft_ra(t_stack *sort, int is_push);
void	ft_gerer_cinque(t_stack *sort, int x);
void	ft_find_lowest(t_stack *sort);
void	ft_nb_to_top(t_stack *sort, int nb, int pos);
long	ft_atoi_long(const char *str);
int		ft_isalldigit(char *str);
void	ft_sort_big(t_stack *sort);
void	ft_first_sort(t_stack *sort);
void	ft_check_bin(int nb, int check, t_stack *sort);
void	ft_clear_b(t_stack *sort);

#endif

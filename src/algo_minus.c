#include "../inc/push_swap.h"

void	algo_for_two(t_env *data)
{
	if (data->tab_ref[0] == data->a.tab[0])
		ft_putstr("OK\n");
	else
		sa_action(data);		
}

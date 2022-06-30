#include "../inc/push_swap.h"

void	sa_action(t_env *data)
{
	swapa(data);
	data->ret++;
	ft_putstr("sa\n");
}

void	sb_action(t_env *data)
{
	swapb(data);
	data->ret++;
	ft_putstr("sb\n");
}

void	ss_action(t_env *data)
{
	swapa(data);
	swapb(data);
	data->ret++;
	ft_putstr("ss\n");
}

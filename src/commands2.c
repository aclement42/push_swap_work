#include "../inc/push_swap.h"

void	rra_action(t_env *data)
{
	rev_rotatea(data);
	data->ret++;
	ft_putstr("rra\n");
}

void	rrb_action(t_env *data)
{
	rev_rotateb(data);
	data->ret++;
	ft_putstr("rrb\n");
}

void	rrr_action(t_env *data)
{
	rev_rotatea(data);
	rev_rotateb(data);
	data->ret++;
	ft_putstr("rrr\n");
}

void	pa_action(t_env *data)
{
	pusha(data);
	data->ret++;
	ft_putstr("pa\n");
}

void	pb_action(t_env *data)
{
	pushb(data);
	data->ret++;
	ft_putstr("pb\n");
}

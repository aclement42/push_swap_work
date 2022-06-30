#include "../inc/push_swap.h"

void	ra_action(t_env *data)
{
	rotatea(data);
	data->ret++;
	ft_putstr("ra\n");
}

void	rb_action(t_env *data)
{
	rotateb(data);
	data->ret++;
	ft_putstr("rb\n");
}

void	rr_action(t_env *data)
{
	rotatea(data);
	rotateb(data);
	data->ret++;
	ft_putstr("rr\n");
}

#include "../inc/push_swap.h"

void	sa_action(t_env *data)
{
	swapa(data);
	ft_putstr("sa\n");
}

void	sb_action(t_env *data)
{
	swapb(data);
	ft_putstr("sb\n");
}

void	ss_action(t_env *data)
{
	swapa(data);
	swapb(data);
	ft_putstr("ss\n");
}

void	ra_action(t_env *data)
{
	rotatea(data);
	ft_putstr("ra\n");
}

void	rb_action(t_env *data)
{
	rotateb(data);
	ft_putstr("rb\n");
}

void	rr_action(t_env *data)
{
	rotatea(data);
	rotateb(data);
	ft_putstr("rr\n");
}

void	rra_action(t_env *data)
{
	rev_rotatea(data);
	ft_putstr("rra\n");
}

void	rrb_action(t_env *data)
{
	rev_rotateb(data);
	ft_putstr("rrb\n");
}

void	rrr_action(t_env *data)
{
	rev_rotatea(data);
	rev_rotateb(data);
	ft_putstr("rrr\n");
}

void	pa_action(t_env *data)
{
	pusha(data);
	ft_putstr("pa\n");
}

void	pb_action(t_env *data)
{
	pushb(data);
	ft_putstr("pb\n");
}

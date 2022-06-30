#include "../inc/push_swap.h"

void	swapa(t_env *data)
{
	long long	tmp;

	tmp = data->a.tab[0];
	data->a.tab[0] = data->a.tab[1];
	data->a.tab[1] = tmp;
}

void	swapb(t_env *data)
{
	long long	tmp;

	tmp = data->b.tab[0];
	data->b.tab[0] = data->b.tab[1];
	data->b.tab[1] = tmp;
}

void	rotatea(t_env *data)
{
	long long	tmp;
	unsigned int		i;

	i = 0;
	tmp = data->a.tab[0];
	while (i < data->a.top - 1)
	{
		data->a.tab[i] = data->a.tab[i + 1];
		i++;
	}
	data->a.tab[i] = tmp;
}

void	rotateb(t_env *data)
{
	long long	tmp;
	unsigned int	i;

	i = 0;
	tmp = data->b.tab[0];
	while (i < data->b.top - 1)
	{
		data->b.tab[i] = data->b.tab[i + 1];
		i++;
	}
	data->b.tab[i] = tmp;
}

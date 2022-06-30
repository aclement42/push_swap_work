#include "../inc/push_swap.h"

void	rev_rotatea(t_env *data)
{
	long long	tmp;
	unsigned int	i;

	i = data->a.top - 1;
	tmp = data->a.tab[i];
	while (i > 0)
	{
		data->a.tab[i] = data->a.tab[i - 1];
		i--;
	}
	data->a.tab[i] = tmp;
}

void	rev_rotateb(t_env *data)
{
	long long	tmp;
	unsigned int	i;

	i = data->b.top - 1;
	tmp = data->b.tab[i];
	while (i > 0)
	{
		data->b.tab[i] = data->b.tab[i - 1];
		i--;
	}
	data->b.tab[i] = tmp;
}

void	pusha(t_env *data)
{
	long long	tmp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	tmp = data->b.tab[0];
	if (data->b.top > 0)
	{
		data->b.top--;
		data->a.top++;
		j = data->a.top - 1;
		while (i < data->b.top)
		{
			data->b.tab[i] = data->b.tab[i + 1];
			i++;
		}
		if (data->a.top > 1)
		{
			while (j > 0)
			{
				data->a.tab[j] = data->a.tab[j - 1];
				j--;
			}
		}
		data->a.tab[0] = tmp;
	}
}

void	pushb(t_env *data)
{
	long long	tmp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	tmp = data->a.tab[0];
	if (data->a.top > 0)
	{
		data->a.top--;
		data->b.top++;
		while (i < data->a.top)
		{
			data->a.tab[i] = data->a.tab[i + 1];
			i++;
		}
		if (data->b.top > 1)
		{
			while (j < data->b.top - 1)
			{
				data->b.tab[j + 1] = data->b.tab[j];
				j++;
			}
		}
		data->b.tab[0] = tmp;
	}
}

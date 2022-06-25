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
		//printf("a.tab[%d] = %lld\n", i, data->a.tab[i]);
		i++;
	}
	data->a.tab[i] = tmp;
	//printf("a.tab[%d] = %lld\n", i, data->a.tab[i]);
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

void	rev_rotatea(t_env *data)
{
	long long	tmp;
	unsigned int	i;

	i = data->a.top - 1;
	tmp = data->a.tab[i];
	printf("%lld\n", tmp);
	while (i > 0)
	{
		data->a.tab[i] = data->a.tab[i - 1];
		//printf("a.tab[%d] = %lld\n", i, data->a.tab[i]);
		i--;		
	}
	data->a.tab[i] = tmp;
	//printf("a.tab[%d] =  %lld\n", i, data->a.tab[i]);
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
	data->b.top--;
	data->a.top++;
	j = data->a.top - 1;
	while (i < data->b.top)
	{
		data->b.tab[i] = data->b.tab[i + 1];
		//printf("cc b.tab[%d] = %lld\n", i, data->b.tab[i]);
		i++;
	}
	if (data->a.top > 1)
	{
		while (j > 0)
		{
			data->a.tab[j] = data->a.tab[j - 1];
		//	printf("a.tab[%d] = %lld\n", j, data->a.tab[j]);
			j--;
		}
	}
	data->a.tab[0] = tmp;
	//printf("a.tab[%d] = %lld\n", 0, data->a.tab[0]);
}

void	pushb(t_env *data)
{
	long long	tmp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	tmp = data->a.tab[0];
	data->a.top--;
	data->b.top++;
	while (i < data->a.top)
	{
		data->a.tab[i] = data->a.tab[i + 1];
		//printf("a.tab[%d] = %lld\n", i, data->a.tab[i]);
		i++;
	}
	//if (!(data->b.tab[j] = malloc(sizeof(long long) * (data->b.top))))
	//	return ;
	if (data->b.top > 1)
	{
		while (j < data->b.top - 1)
		{
			data->b.tab[j + 1] = data->b.tab[j];
			//printf("b.tab[%d] = %lld\n", j + 1, data->b.tab[j + 1]);
			j++;
		}
	}
	data->b.tab[0] = tmp;
	//printf("lui, b.tab[%d] = %lld\n", 0, data->b.tab[0]);
}

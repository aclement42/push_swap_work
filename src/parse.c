#include "../inc/push_swap.h"

void	ft_stock_args_ref(char **str, t_env *data)
{
	unsigned int	i;
	int	j;

	i = 1;
	j = 0;
	if (!(data->tab_ref = malloc(sizeof(long long) * (data->nbparam))))
		return ;
	while (i <= data->nbparam)
	{
		data->tab_ref[j] = ft_atoi(str[i]);
		j++;
		i++;
	}
	ft_sort_in_tab(data, data->nbparam);
	ft_check_nodup(data);
}

void	ft_stock_args_a(char **str, t_env *data)
{
	unsigned int	i;
	unsigned int	j;

	i = 1;
	j = 0;
	if (!(data->a.tab = malloc(sizeof(long long) * (data->nbparam))))
		return ;
	if (!(data->b.tab = malloc(sizeof(long long) * (data->nbparam))))
		return ;
	data->a.top = data->nbparam;
	while (j < data->a.top)
	{
		data->a.tab[j] = ft_atoi(str[i]);
		j++;
		i++;
	}
}

void	ft_choose_algo(t_env *data)
{
	if (data->nbparam == 2)
		algo_for_two(data);
	else if (data->nbparam == 3)
		algo_for_three(data, 0);
	else if (data->nbparam == 4)
		algo_for_four(data);
	else if (data->nbparam == 5)
		algo_for_five(data);
	/*else
		algo_for_more;*/
}

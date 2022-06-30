#include "../inc/push_swap.h"

void	algo_for_four(t_env *data)
{
	push_smaller_top_four(data);
	if (ft_check_already_good_plus(data, 1) == 0)
		algo_for_three(data, 1);
	pa_action(data);
}

int	find_smaller(t_env *data, int pos)
{
	unsigned int	i;

	i = 0;
	while (i < data->a.top && (data->tab_ref[pos] != data->a.tab[i]))
		i++;
	return (i);
}

void	push_smaller_top_four(t_env *data)
{
	unsigned int	i;

	i = find_smaller(data, 0);
	if (i == 1)
		sa_action(data);
	else if (i == 2)
	{
		ra_action(data);
		ra_action(data);
	}
	else if (i == 3)
		rra_action(data);
	pb_action(data);
}

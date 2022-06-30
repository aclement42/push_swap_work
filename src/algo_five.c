#include "../inc/push_swap.h"

void	algo_for_five(t_env *data)
{
	unsigned int	pos1;
	unsigned int	pos2;

	pos1 = find_smaller(data, 0);
	put_it_far(data, data->tab_ref[0], pos1);
	pb_action(data);
	pos2 = find_smaller(data, 1);
	put_it_far(data, data->tab_ref[1], pos2);
	pb_action(data);
	if (ft_check_already_good_plus(data, 2) == 0)
		algo_for_three(data, 2);
	pa_action(data);
	pa_action(data);
}

void	put_it_far(t_env *data, long long friend, unsigned int pos)
{
	if (pos > 1)
	{
		while (data->a.tab[0] != friend)
			rra_action(data);
	}
	else
	{
		while (data->a.tab[0] != friend)
			ra_action(data);
	}
}

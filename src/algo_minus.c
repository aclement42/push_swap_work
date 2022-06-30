#include "../inc/push_swap.h"

void	algo_for_two(t_env *data)
{
		sa_action(data);		
}

void	algo_for_three(t_env *data, int i)
{
	if (data->tab_ref[i] == data->a.tab[0])
		first_case_three(data);
	else if (data->a.tab[0] == data->tab_ref[i + 1])
	{
		if (data->a.tab[1] == data->tab_ref[i])
			second_case_three(data);
		else if (data->a.tab[2] == data->tab_ref[i])
			third_case_three(data);
	}
	else if (data->a.tab[0] == data->tab_ref[i + 2])
	{
		if (data->a.tab[1] == data->tab_ref[i + 1])
			fourth_case_three(data);
		else if (data->a.tab[1] == data->tab_ref[i])
			fith_case_three(data);
	}
}

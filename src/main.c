#include "../inc/push_swap.h"


int	main(int ac, char **av)
{
	t_env	data;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	ft_bzero(&data, sizeof(t_env));
	data.nbparam = ac - 1;
	if (ac < 2)
		return (0);
	else
	{
		ft_treat_args(data.nbparam, av);
		ft_stock_args_ref(av, &data);
		ft_stock_args_a(av, &data);
		if (ft_check_already_good(&data, 0) == 1)
			exit (0);
		printf("---\n");
		ft_choose_algo(&data);
	}
	while (i < data.nbparam)
	{
		printf("after, tab_ref[%d] = %lld\n", i, data.tab_ref[i]);
		i++;
	}
	while (j < data.nbparam)
	{
		printf("after, tab_a[%d] = %lld\n", j, data.a.tab[j]);
		j++;
	}
	printf("ret : %d\n", data.ret);
	return (0);
}


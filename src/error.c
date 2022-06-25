#include "../inc/push_swap.h"

void	ft_treat_args(int nb, char **str)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		if (ft_check_int(str[i]) == 1)
			i++;
		else
		{
			ft_putstr("Error\n");
			exit(0);
		}
	}		
}

int	ft_check_int(char *str)
{
	int	i;
	long long int	nb;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '+' || str[0] == '-')
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	nb = ft_atoll(str);
	if (nb >= -2147483648 && nb <= 2147483647)
		return (1);
	else
		return (0);
}

void	ft_check_nodup(t_env *data)
{
	int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (j < data->nbparam)
	{
		if (data->tab_ref[i] != data->tab_ref[j])
		{
			i++;
			j++;
		}
		else
		{
			ft_putstr("Error\n");
			// free ma tab_ref si ca echoue comme ca pas de leaks et fin de prgm
			exit(0);
		}
	}	
}

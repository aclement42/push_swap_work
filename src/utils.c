#include "../inc/push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		ft_putchar(str[i++]);
}

void	ft_swap(long long *a, long long *b)
{
	long long	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

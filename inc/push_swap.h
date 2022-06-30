#ifndef PUSH_SWAP_C
# define PUSH_SWAP_C

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <stdarg.h>

typedef	struct		s_stack
{
	unsigned int 	top;
	long long	*tab;
}				t_stack;

typedef struct		s_env
{
	unsigned int	nbparam;
	long long	*tab_ref;
	t_stack		a;
	t_stack		b;
	int		ret;
}				t_env;

/*
main.c
*/

int		main(int ac, char **av);

/*
utils.c
*/

void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_swap(long long *a, long long *b);

/*
utils2.c
*/

void		ft_sort_in_tab(t_env *data, int size);
long long int	ft_atoll(char *str);
int		ft_atoi(char *str);

/*
error.c
*/

void		ft_treat_args(int nb, char **str);
int		ft_check_int(char *str);
int		ft_check_already_good(t_env *data, unsigned int i);
int		ft_check_already_good_plus(t_env *data, unsigned int i);
void		ft_check_nodup(t_env *data);

/*
parse.c
*/

void		ft_stock_args_ref(char **str, t_env *data);
void		ft_stock_args_a(char **str, t_env *data);
void		ft_choose_algo(t_env *data);

/*
operations.c
*/

void		swapa(t_env *data);
void		swapb(t_env *data);
void		rotatea(t_env *data);
void		rotateb(t_env *data);

/*
operations1.c
*/

void		rev_rotatea(t_env *data);
void		rev_rotateb(t_env *data);
void		pusha(t_env *data);
void		pushb(t_env *data);

/*
commands.c
*/

void		sa_action(t_env *data);
void		sb_action(t_env *data);
void		ss_action(t_env *data);

/*
commands1.c
*/

void		ra_action(t_env *data);
void		rb_action(t_env *data);
void		rr_action(t_env *data);

/*
commands2.c
*/

void		rra_action(t_env *data);
void		rrb_action(t_env *data);
void		rrr_action(t_env *data);
void		pa_action(t_env *data);
void		pb_action(t_env *data);

/*
algo_minus.c
*/

void		algo_for_two(t_env *data);
void		algo_for_three(t_env *data, int pos);

/*
algo.c
*/

void		first_case_three(t_env *data);
void		second_case_three(t_env *data);
void		third_case_three(t_env *data);
void		fourth_case_three(t_env *data);
void		fith_case_three(t_env *data);

/*
algo_four.c
*/

void		push_smaller_top_four(t_env *data);
int		find_smaller(t_env *data, int pos);
void		algo_for_four(t_env *data);

/*
algo_five.c
*/

void		algo_for_five(t_env *data);
void		put_it_far(t_env *data, long long friend, unsigned int pos);


#endif

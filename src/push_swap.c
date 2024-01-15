#include "../inc/pushswap.h"

int	checkdigit(char *argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

void	freetab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void checkentry(int argc, char **argv)
{
	char		**str;
	long long	nb;
	int			i;

	i = 1;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		i = 0;
	}
	else
		str = argv;
	while (str[i])
	{
		if (!checkdigit(str[i]))
			error("Ce ne sont pas que des nombres");
		nb = ft_atoi(str[i]);
		if (nb < -2147483648 || nb > 2147483647)
			error("Nombre plus grand qu'un int");
		i++;
	}
	if (argc == 2)
		freetab(str);
}

void	inititstack(t_stack **stack, int argc, char **argv)
{
	char		**str;
	int	nb;
	int			i;

	i = 1;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		i = 0;
	}
	else
		str = argv;
	while (str[i])
	{
		nb = (int)ft_atoi(str[i]);
		app(stack, nb);
		i++;
	}
	if (argc == 2)
		freetab(str);
}

int	istrie(t_stack *stack)
{
	while (stack->next)
	{
		if (!(stack->value < stack->next->value))
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	/*char *argv[] = {"push_swap", "15 48 78 59 26 15 48 59 36 25"};
	int	argc = 2;*/
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		error("Nombre d'argument trop faible");
	checkentry(argc, argv);
	a = NULL;
	b = NULL;
	inititstack(&a, argc, argv);
	if (istrie(a))
		return (freelist(a, b), ft_printf("Ta pile est trie"), 1);
	printstack(a, b);
	freelist(a, b);
}

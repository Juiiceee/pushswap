#include "../inc/pushswap.h"

void	printstack(t_stack *a, t_stack *b)
{
	ft_printf("a = \n");
	if (a)
		ft_printf("NULL -> ");
	while (a)
	{
		ft_printf("%d -> ", a->value);
		a = a->next;
	}
	ft_printf("NULL");
	ft_printf("\nb = \n");
	if (b)
		ft_printf("NULL -> ");
	while (b)
	{
		ft_printf("%d -> ", b->value);
		b = b->next;
	}
	ft_printf("NULL\n");
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

int	main(/*int argc, char **argv*/)
{
	char *argv[] = {"push_swap", "2 3 0 5 1"};
	int	argc = 2;
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		error("Nombre d'argument trop faible");
	checkentry(argc, argv);
	a = NULL;
	b = NULL;
	inititstack(&a, argc, argv);
	putindex(&a);
	//ft_printf("%d", ismin(a));
	/*if (istrie(a))
		return (freelist(a, b), ft_printf("Ta pile est trie"), 1);*/
	//printstack(a, b);
	sortsimple(&a, &b);
	//printstack(a, b);
	freelist(a, b);
}

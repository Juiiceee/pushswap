#include "../inc/pushswap.h"

int	checkdigit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int checkentry(int argc, char **argv)
{
	if (!checkdigit(argv) || argc == 1)
		return (0);
	return (1);
}

t_stack	*top(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->suiv)
		stack = stack->suiv;
	return (stack);
}

void	app(t_stack **stack, int n)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->suiv = NULL;
	node->value = n;
	if (!(*stack))
	{
		*stack = node;
		node->prec = NULL;
	}
	else
	{
		node->prec = top(*stack);
		top(*stack)->suiv = node;
	}
}

void	printstack(t_stack *a, t_stack *b)
{
	ft_printf("a = \n");
	if (a)
		ft_printf("NULL -> ");
	while (a)
	{
		ft_printf("%d -> ", a->value);
		a = a->suiv;
	}
	ft_printf("NULL");
	ft_printf("\nb = \n");
	if (b)
		ft_printf("NULL -> ");
	while (b)
	{
		ft_printf("%d -> ", b->value);
		b = b->suiv;
	}
	ft_printf("NULL\n");
}

void	freelist(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->suiv;
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	t_stack	*a;
	t_stack	*b;
	a = NULL;
	b = NULL;
	app(&a, 15);
	app(&a, 16);
	app(&a, 17);
	app(&a, 18);
	app(&b, 45);
	//sa(&a);
	pa(&a, &b);
	printstack(a, b);
	pb(&b, &a);
	printstack(a, b);
	freelist(a);
	freelist(b);
}

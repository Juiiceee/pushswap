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

void	app(t_stack **stack, int n)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	if (!(*stack))
	{
		*stack = node;
		node->prec = NULL;
	}
	else
	{
		node->prec = ft_lstlast(*stack);
		ft_lstlast(*stack)->next = node;
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

void	freelist(t_stack *a, t_stack *b)
{
	t_stack	*temp;

	while (a)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	while (b)
	{
		temp = b;
		b = b->next;
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
	app(&b, 47);
	//sa(&a);
	//pa(&a, &b);
	printstack(a, b);
	/*sa(&a);
	printstack(a, b);
	pb(&b, &a);
	printstack(a, b);
	sb(&b);
	//pb(&b, &a);*/
	//sa(&a);
	pa(&a, &b);
	pa(&a, &b);
	//rotate(&b);
	printstack(a, b);
	freelist(a, b);
}

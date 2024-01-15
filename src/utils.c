#include "../inc/pushswap.h"

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

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
	}
}

void	error(char *str)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str, 2);
	exit(0);
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

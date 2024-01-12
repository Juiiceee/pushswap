#include "../inc/pushswap.h"

void swap(t_stack **stack)
{
	int temp;

	if (!stack)
		return;
	temp = ft_lstlast(*stack)->value;
	ft_lstlast(*stack)->value = ft_lstlast(*stack)->prec->value;
	ft_lstlast(*stack)->prec->value = temp;
}

void sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

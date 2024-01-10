#include "../inc/pushswap.h"

void swap(t_stack **stack)
{
	int temp;

	if (!stack)
		return;
	temp = top(*stack)->value;
	top(*stack)->value = top(*stack)->prec->value;
	top(*stack)->prec->value = temp;
}

void sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

#include "../inc/pushswap.h"

void swap(t_stack **stack)
{
	int temp;
	t_stack	*st;

	if (!stack || ft_lstsize(*stack) <= 1)
		return;
	st = *stack;
	temp = st->value;
	st->value = st->next->value;
	st->next->value = temp;
	temp = st->index;
	st->index = st->next->index;
	st->next->index = temp;
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

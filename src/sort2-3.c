#include "../inc/pushswap.h"


void	cas3(t_stack **stack)
{
	t_stack	*st;

	st = *stack;
	if (st->value > st->next->value && st->value < st->next->next->value)
		sa(&st);
	else if (st->value > st->next->value && st->value > st->next->next->value
		&& st->next->value > st->next->next->value)
	{
		sa(&st);
		rra(&st);
	}
	else if (st->value > st->next->value && st->value > st->next->next->value
		&& st->next->value < st->next->next->value)
		ra(&st);
	else if (st->value < st->next->value && st->value < st->next->next->value)
	{
		sa(&st);
		ra(&st);
	}
	else if (st->value < st->next->value && st->value > st->next->next->value)
		rra(&st);
	*stack = st;
}

void	sortsimple(t_stack **a, t_stack **b)
{

	if (ft_lstsize(*a) == 2)
		sa(a);
	else if (ft_lstsize(*a) == 3)
		cas3(a);
	else if (ft_lstsize(*a) == 4)
		cas4(a, b);
	else if (ft_lstsize(*a) == 5)
		cas5(a, b);
}

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
}

void	sortsimple(t_stack **stack)
{
	if (ft_lstsize(*stack) == 2)
		sa(stack);
	else if (ft_lstsize(*stack) == 3)
		cas3(stack);
}

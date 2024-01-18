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

void	cas4(t_stack **a, t_stack **b)
{
	pb(b, a);
	cas3(a);
	pa(a, b);
	if (ismin(*a) == 1)
		sa(a);
	else if (ismin(*a) == 2)
	{
		sa(a);
		cas4(a, b);
	}
	else if (ismin(*a) == 3)
		ra(a);
}

void	first(t_stack **a, t_stack **b)
{
	if ((*a)->next->index == 0)
		sa(a);
	else if ((*a)->next->next->index == 0)
	{
		ra(a);
		ra(a);
	}
	else if ((*a)->next->next->next->index == 0)
	{
		rra(a);
		rra(a);
	}
	else if ((*a)->next->next->next->next->index == 4)
	{
		rra(a);
	}
	pb(b, a);
}

void	second(t_stack **a, t_stack **b)
{
	if ((*a)->next->index == 1)
		sa(a);
	else if ((*a)->next->next->index == 1)
	{
		ra(a);
		ra(a);
	}
	else if ((*a)->next->next->next->index == 1)
	{
		rra(a);
	}
	pb(b, a);
}

void	cas5(t_stack **a, t_stack **b)
{
	first(a, b);
	second(a, b);
	cas3(a);
	pa(a, b);
	pa(a, b);
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

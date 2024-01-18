#include "../inc/pushswap.h"

void	first(t_stack **a, t_stack **b)
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
		rra(a);
	}
	else if ((*a)->next->next->next->next->index == 1)
		rra(a);
	pb(b, a);
}

void	second(t_stack **a, t_stack **b)
{
	if ((*a)->next->index == 2)
		sa(a);
	else if ((*a)->next->next->index == 2)
	{
		ra(a);
		ra(a);
	}
	else if ((*a)->next->next->next->index == 2)
		rra(a);
	pb(b, a);
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

void	cas5(t_stack **a, t_stack **b)
{
	first(a, b);
	second(a, b);
	cas3(a);
	pa(a, b);
	pa(a, b);
}

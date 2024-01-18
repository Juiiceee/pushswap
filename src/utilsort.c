#include "../inc/pushswap.h"

int	ismin(t_stack	*stack)
{
	int	i;
	int nbr;

	nbr = stack->value;
	i = 0;
	while (stack)
	{
		if(stack->value < nbr)
			i++;
		stack = stack->next;
	}
	return (i);
}

void	putindex(t_stack **stack)
{
	t_stack	*st;
	t_stack	*sv;
	int	i;
	int nbr;

	sv = *stack;
	nbr = sv->value;
	while (1)
	{
		st = *stack;
		i = 1;
		while (st)
		{
			if(st->value < nbr)
				i++;
			st = st->next;
		}
		sv->index = i;
		if (sv->next)
			nbr = sv->next->value;
		else
			break;
		sv = sv->next;
	}
}

int	reppui(int nbr)
{
	int	i;
	int	compte;

	i = 0;
	compte = 0;
	while (i <= 8)
	{
		if ((1 << i) & nbr)
			compte = i;
		i++;
	}
	return (compte);
}

int	istrie(t_stack *stack)
{
	while (stack->next)
	{
		if (!(stack->value < stack->next->value))
			return (0);
		stack = stack->next;
	}
	return (1);
}

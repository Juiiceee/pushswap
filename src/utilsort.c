#include "../inc/pushswap.h"

int	ismin(t_stack	*stack)
{
	int	i;
	int nbr;
	int j;

	nbr = stack->value;
	i = 0;
	j = 0;
	while (stack)
	{
		if(stack->value < nbr)
			i++;
		j++;
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
		i = 0;
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

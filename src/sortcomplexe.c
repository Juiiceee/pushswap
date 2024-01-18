#include "../inc/pushswap.h"

int	nbelement(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	firsttri(t_stack **a, t_stack **b, int dec)
{
	t_stack	*st;
	int	i;
	int	elem;

	elem = nbelement(*a);
	st = *a;
	i = 0;
	while (elem--)
	{
		printf("le resultat = %d le dec = %d l'index = %d et la value = %d\n", (1 << dec) & st->index, dec, st->index, st->value);
		printstack(*a, *b);
		if ((1 << dec) & st->index)
		{
			st = st->next;
			pb(b, a);
			i++;
		}
		else
		{
			st = st->next;
			rra(a);
		}
	}
	while (i--)
	{
		pa(a, b);
	}
}

void	sortcomplexe(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (!istrie(*a))
	{
		firsttri(a, b, i);
		i++;
	}
}

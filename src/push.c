#include "../inc/pushswap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack *dest;
	t_stack	*sour;

	if (!(*src))
		return ;
	sour = ft_lstlast(*src);
	if (sour->prec)
		sour->prec->next = NULL;
	else
		*src = NULL;
	sour->prec = NULL;
	sour->next = NULL;
	if(!(*dst))
		*dst = sour;
	else
	{
		dest = ft_lstlast(*dst);
		dest->next = sour;
		sour->prec = dest;
	}
}
void	pa(t_stack **dst, t_stack **src)
{
	push(dst, src);
	ft_printf("pa\n");
}

void	pb(t_stack **dst, t_stack **src)
{
	push(dst, src);
	ft_printf("pb\n");
}
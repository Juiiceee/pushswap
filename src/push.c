#include "../inc/pushswap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack *dest;
	t_stack	*sour;

	if (!(*src))
		return ;
	sour = top(*src);
	if (sour->prec)
		sour->prec->suiv = NULL;
	else
		*src = NULL;
	sour->prec = NULL;
	sour->suiv = NULL;
	if(!(*dst))
		*dst = sour;
	else
	{
		dest = top(*dst);
		dest->suiv = sour;
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
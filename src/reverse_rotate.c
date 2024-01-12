#include "../inc/pushswap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*front;
	t_stack	*back;

	if (ft_lstsize(*stack) <= 1)
		return;
	front = *stack;
	back = ft_lstlast(front);
	stack = back;
	back->prec = NULL;
	
}

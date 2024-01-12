#include "../inc/pushswap.h"

void	rotate(t_stack **stack)
{
	t_stack	*front;
	t_stack	*back;

	if (ft_lstsize(*stack) <= 1)
		return;
	front = *stack;
	back = ft_lstlast(front);
	*stack = front->next;
	front->next = NULL;
	back->next = front;
	return;
}

void	ra(t_stack **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

#include "../inc/pushswap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*front;
	t_stack	*back;
	t_stack	*tmp;

	back = ft_lstlast(*stack);
	front = ft_lstlast(*stack)->prec;
	tmp = *stack;
	*stack = back;
	(*stack)->next = tmp;
	front->next = NULL;
}

void	rra(t_stack **stack)
{
	reverse_rotate(stack);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	reverse_rotate(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack)
{
	reverse_rotate(stack);
	ft_printf("rrr\n");
}
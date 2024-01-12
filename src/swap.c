#include "../inc/pushswap.h"

void swap(t_stack **stack)
{
	int temp;

	if (!stack)
		return;
	temp = ft_lstlast(*stack)->value;
	ft_lstlast(*stack)->value = ft_lstlast(*stack)->prec->value;
	ft_lstlast(*stack)->prec->value = temp;
}

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

void sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

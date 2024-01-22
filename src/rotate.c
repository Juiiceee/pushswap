/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:35:48 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:35:56 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

void	rotate(t_stack **stack)
{
	t_stack	*front;
	t_stack	*back;

	if (ft_lstsize(*stack) <= 1)
		return ;
	front = *stack;
	back = ft_lstlast(front);
	*stack = front->next;
	front->next->prec = NULL;
	front->next = NULL;
	front->prec = back;
	back->next = front;
	return ;
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

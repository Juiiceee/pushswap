/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:35:33 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:35:38 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	(*stack)->prec = NULL;
	(*stack)->next->prec = *stack;
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

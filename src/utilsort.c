/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:37:09 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/26 12:50:29 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int	ismin(t_stack	*stack)
{
	int	i;
	int	nbr;

	nbr = stack->value;
	i = 0;
	while (stack)
	{
		if (stack->value < nbr)
			i++;
		stack = stack->next;
	}
	return (i);
}

void	putindex(t_stack **stack)
{
	t_stack	*st;
	t_stack	*sv;
	int		i;
	int		nbr;

	sv = *stack;
	nbr = sv->value;
	while (1)
	{
		st = *stack;
		i = 1;
		while (st)
		{
			if (st->value < nbr)
				i++;
			st = st->next;
		}
		sv->index = i;
		if (sv->next)
			nbr = sv->next->value;
		else
			break ;
		sv = sv->next;
	}
}

int	istrie(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (!(stack->value < stack->next->value))
			return (0);
		stack = stack->next;
	}
	return (1);
}

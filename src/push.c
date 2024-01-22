/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:35:06 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:35:21 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prec = NULL;
	if (!(*dst))
	{
		*dst = temp;
		(*dst)->next = NULL;
		(*dst)->prec = NULL;
	}
	else
	{
		temp->next = *dst;
		(*dst)->prec = temp;
		*dst = temp;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortcomplexe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:36:20 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:36:26 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int	nbelement(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	firsttri(t_stack **a, t_stack **b, int dec)
{
	t_stack	*st;
	int		i;
	int		elem;

	elem = nbelement(*a);
	st = *a;
	i = 0;
	while (elem--)
	{
		if (!((1 << dec) & st->index))
		{
			st = st->next;
			pb(b, a);
			i++;
		}
		else
		{
			st = st->next;
			ra(a);
		}
	}
	while (i--)
	{
		pa(a, b);
	}
}

void	sortcomplexe(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (!istrie(*a))
	{
		firsttri(a, b, i);
		i++;
	}
}

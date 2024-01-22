/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:38:52 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:38:53 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"
#include <stdio.h>

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*st;

	st = *lst;
	if (!new)
		return ;
	while (st->next)
		st = st->next;
	st->next = new;
}

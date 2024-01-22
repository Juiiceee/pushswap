/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:39:28 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:39:29 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = content;
	node->next = NULL;
	return (node);
}

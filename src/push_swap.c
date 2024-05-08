/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:34:49 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/26 12:50:40 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

void	printstack(t_stack *a, t_stack *b)
{
	ft_printf("a = \n");
	if (a)
		ft_printf("NULL -> ");
	while (a)
	{
		ft_printf("%d -> ", a->value);
		a = a->next;
	}
	ft_printf("NULL");
	ft_printf("\nb = \n");
	if (b)
		ft_printf("NULL -> ");
	while (b)
	{
		ft_printf("%d -> ", b->value);
		b = b->next;
	}
	ft_printf("NULL\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	if (ft_strlen(argv[1]) <= 0)
		return (0);
	checkentry(argc, argv);
	a = NULL;
	b = NULL;
	inititstack(&a, argc, argv);
	if (istrie(a))
		return (freelist(a, b), 1);
	putindex(&a);
	if (ft_lstsize(a) <= 5)
		sortsimple(&a, &b);
	else
		sortcomplexe(&a, &b);
	freelist(a, b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:33:46 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:34:05 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

long long	ft_atoi(const char *nptr)
{
	long long	total;
	int			signe;
	int			i;

	total = 0;
	signe = 1;
	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -signe;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		total = total * 10 + (nptr[i] - '0');
		i++;
	}
	total = total * signe;
	return (total);
}

void	app(t_stack **stack, int n)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	if (!(*stack))
	{
		*stack = node;
		node->prec = NULL;
	}
	else
	{
		node->prec = ft_lstlast(*stack);
		ft_lstlast(*stack)->next = node;
	}
}

void	inititstack(t_stack **stack, int argc, char **argv)
{
	char	**str;
	int		nb;
	int		i;

	i = 1;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		i = 0;
	}
	else
		str = argv;
	while (str[i])
	{
		nb = (int)ft_atoi(str[i]);
		app(stack, nb);
		i++;
	}
	if (argc == 2)
		freetab(str);
}

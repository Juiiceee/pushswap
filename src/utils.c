/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:36:58 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 17:17:01 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
	}
}

void	error(char *str)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd("\n", 2);
	exit(0);
}

void	freelist(t_stack *a, t_stack *b)
{
	t_stack	*temp;

	while (a)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	while (b)
	{
		temp = b;
		b = b->next;
		free(temp);
	}
}

void	freetab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

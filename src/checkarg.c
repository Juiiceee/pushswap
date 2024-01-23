/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:34:22 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/23 16:26:34 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int	checkdigit(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

void	checkentry(int argc, char **argv)
{
	char		**str;
	long long	nb;
	int			i;

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
		if (!checkdigit(str[i]))
			return (error("Ce ne sont pas que des nombres", argc, str));
		nb = ft_atoi(str[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (error("Nombre plus grand ou petit qu'un int", argc, str));
		i++;
	}
	if (!checkdoublon(str))
		return (error("Il y a des doublons", argc, str));
	if (argc == 2)
		freetab(str);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	checkdoublon(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0 && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

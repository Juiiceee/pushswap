/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:32:29 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/12 18:14:59 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"

int	countword(char const *s, char c)
{
	int	word;
	int	i;
	int	bool;

	bool = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			bool = 0;
		else if (!bool)
		{
			bool = 1;
			word++;
		}
		i++;
	}
	return (word);
}

char	*insert_word(char const *str, char c, int	*avancement)
{
	int		i;
	char	*ph;

	i = 0;
	while (str[*avancement] == c)
		(*avancement)++;
	while (!(str[*avancement] == c) && str[*avancement])
	{
		i++;
		(*avancement)++;
	}
	ph = (char *)malloc(i + 1);
	if (!ph)
		return (NULL);
	*avancement -= i;
	i = 0;
	while (!(str[*avancement] == c) && str[*avancement])
	{
		ph[i] = str[*avancement];
		(*avancement)++;
		i++;
	}
	ph[i] = '\0';
	return (ph);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		word;
	int		avancement;

	avancement = 0;
	word = countword(s, c);
	i = 0;
	tab = malloc((word + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < word)
	{
		tab[i] = insert_word(s, c, &avancement);
		if (!tab[i])
			return (NULL);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
/*int main()
{
	char *haystack = " Tripouille";
	char	**test;
	int i = 0;
	test = ft_split(haystack, ' ');
	//test[0][3] = 'p';
	//printf("%s\n",test[0]);
	// while(test[i] != NULL)
	// {
	// 	printf("%s\n",test[i]);
	// 	i++;
	// }
	printf("=%s=",test[0]);
	printf("=%s=",test[1]);
}*/

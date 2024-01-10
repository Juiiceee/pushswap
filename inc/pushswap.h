#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		value;
	struct s_stack	*prec;
	struct s_stack	*suiv;
}	t_stack;

char	**ft_split(char const *s, char c);

#endif
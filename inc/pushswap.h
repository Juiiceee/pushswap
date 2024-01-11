#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../include/ft_printf.h"

typedef struct s_stack
{
	int		value;
	struct s_stack	*prec;
	struct s_stack	*suiv;
}	t_stack;

char	**ft_split(char const *s, char c);
t_stack	*top(t_stack *stack);

void 	swap(t_stack **stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void 	ss(t_stack **a, t_stack **b);

//void push(t_stack **a, t_stack **b);
void	push(t_stack **dst, t_stack **src);
void	pa(t_stack **dst, t_stack **src);
void	pb(t_stack **dst, t_stack **src);

#endif
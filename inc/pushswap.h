#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../include/ft_printf/ft_printf.h"
# include "../include/liste/t_list.h"

char	**ft_split(char const *s, char c);

void	rotate(t_stack **stack);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **a, t_stack **b);

void	swap(t_stack **stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **a, t_stack **b);

void	push(t_stack **dst, t_stack **src);
void	pa(t_stack **dst, t_stack **src);
void	pb(t_stack **dst, t_stack **src);

void	reverse_rotate(t_stack **stack);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack);

void	app(t_stack **stack, int n);
void	printstack(t_stack *a, t_stack *b);
void	ft_putstr_fd(char *s, int fd);
void	error(char *str);
void	freelist(t_stack *a, t_stack *b);

long long	ft_atoi(const char *nptr);

#endif
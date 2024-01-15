#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../include/ft_printf/ft_printf.h"
# include "../include/liste/t_list.h"

//split.c
char		**ft_split(char const *s, char c);
//rotate.c
void		rotate(t_stack **stack);
void		ra(t_stack **stack);
void		rb(t_stack **stack);
void		rr(t_stack **a, t_stack **b);
//swap.c
void		swap(t_stack **stack);
void		sa(t_stack **stack);
void		sb(t_stack **stack);
void		ss(t_stack **a, t_stack **b);

//push.c
void		push(t_stack **dst, t_stack **src);
void		pa(t_stack **dst, t_stack **src);
void		pb(t_stack **dst, t_stack **src);

//reverse_rotate.c
void		reverse_rotate(t_stack **stack);
void		rra(t_stack **stack);
void		rrb(t_stack **stack);
void		rrr(t_stack **stack);

//add.c
void		app(t_stack **stack, int n);
long long	ft_atoi(const char *nptr);
void		inititstack(t_stack **stack, int argc, char **argv);

//checkarg.c 
int			checkdigit(char *argv);
void		checkentry(int argc, char **argv);

//utils.c
void		ft_putstr_fd(char *s, int fd);
void		error(char *str);
void		freelist(t_stack *a, t_stack *b);
void		freetab(char **str);

void		printstack(t_stack *a, t_stack *b);


#endif
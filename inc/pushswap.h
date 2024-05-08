/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:39:44 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/26 11:42:46 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int			ft_isdigit(int c);
void		app(t_stack **stack, int n);
long long	ft_atoi(const char *nptr);
void		inititstack(t_stack **stack, int argc, char **argv);

//checkarg.c
int			checkdigit(char *argv);
void		checkentry(int argc, char **argv);

//utils.c
void		ft_putstr_fd(char *s, int fd);
void		error(char *str, int argc, char **argv);
void		freelist(t_stack *a, t_stack *b);
void		freetab(char **str);
int			checkdoublon(char **argv, int argc);

//sort2-3.c
void		cas3(t_stack **stack);
void		sortsimple(t_stack **a, t_stack **b);

//sort3-4.c
void		first(t_stack **a, t_stack **b);
void		second(t_stack **a, t_stack **b);
void		cas4(t_stack **a, t_stack **b);
void		cas5(t_stack **a, t_stack **b);

//sortcomplexe.c
void		firsttri(t_stack **a, t_stack **b, int dec);
void		sortcomplexe(t_stack **a, t_stack **b);
int			nbelement(t_stack *a);

//utilsort.c
int			ismin(t_stack	*stack);
void		putindex(t_stack **stack);
int			istrie(t_stack *stack);

void		printstack(t_stack *a, t_stack *b);

#endif
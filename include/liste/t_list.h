/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:39:37 by lbehr             #+#    #+#             */
/*   Updated: 2024/01/22 11:40:04 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST_H
# define T_LIST_H

# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prec;
	struct s_stack	*next;
}	t_stack;

int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstnew(int content);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);

#endif
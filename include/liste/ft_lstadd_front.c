#include "t_list.h"

void ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}

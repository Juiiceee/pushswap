#include "t_list.h"
#include <stdio.h>

void ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*st;

	st = *lst;
	if (!new)
		return;
	while (st->next)
		st = st->next;
	st->next = new;
}

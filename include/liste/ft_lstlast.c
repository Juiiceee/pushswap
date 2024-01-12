#include "t_list.h"

t_stack *ft_lstlast(t_stack *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return (lst);
}

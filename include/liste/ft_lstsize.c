#include "t_list.h"

int	ft_lstsize(t_stack *lst)
{
	int		i;

	i = 1;
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

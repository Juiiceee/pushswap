#include "../inc/pushswap.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
	}
}

void	error(char *str)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str, 2);
	exit(0);
}

void	freelist(t_stack *a, t_stack *b)
{
	t_stack	*temp;

	while (a)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	while (b)
	{
		temp = b;
		b = b->next;
		free(temp);
	}
}

void	freetab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

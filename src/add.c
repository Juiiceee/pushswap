#include "../inc/pushswap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

long long	ft_atoi(const char *nptr)
{
	long long	total;
	int			signe;
	int			i;

	total = 0;
	signe = 1;
	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -signe;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		total = total * 10 + (nptr[i] - '0');
		i++;
	}
	total = total * signe;
	return (total);
}

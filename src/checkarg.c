#include "../inc/pushswap.h"

int	checkdigit(char *argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

void checkentry(int argc, char **argv)
{
	char		**str;
	long long	nb;
	int			i;

	i = 1;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		i = 0;
	}
	else
		str = argv;
	while (str[i])
	{
		if (!checkdigit(str[i]))
			return (freetab(str), error("Ce ne sont pas que des nombres"));
		nb = ft_atoi(str[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (freetab(str), error("Nombre plus grand qu'un int"));
		i++;
	}
	if (!checkdoublon(str))
		return (freetab(str), error("Il y a des doublons"));
	if (argc == 2)
		freetab(str);
}

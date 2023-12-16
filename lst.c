#include "lst.h"

int	isemptystack(Stack sta)
{
	if (!sta)
		return (1);
	return (0);
}

void	pushstack(Stack *sta, int value)
{
	Stackelement	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->value = value;
	element->next = *sta;
	*sta = element;
}

/*void	clearstack(Stack *sta)
{
	 
}*/

void	printstack(Stack sta)
{
	if (isemptystack(sta))
	{
		printf("La pile est vide");
		return;
	}
	while (sta)
	{
		printf("%d\n", sta->value);
		sta = sta->next;
	}
}

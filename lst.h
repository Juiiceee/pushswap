#ifndef LST_H
# define LST_H

# include <stdlib.h>
# include <stdio.h>

typedef struct Stackelement
{
	int value;
	struct Stackelement *next;
}	Stackelement, *Stack;

int	isemptystack(Stack sta);
void	pushstack(Stack *sta, int value);
void	clearstack(Stack *sta);
void	printstack(Stack sta);



#endif

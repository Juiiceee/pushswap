#include "lst.h"

int main()
{
	Stack sta = NULL;

	pushstack(&sta, 15);
	pushstack(&sta, 59);
	printstack(sta);
}

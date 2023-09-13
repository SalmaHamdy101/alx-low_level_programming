#include <stdio.h>
#include "main.h"
void print_to_98(int c)
{
	int i, j;

	if (c <= 98)
	{
		for (i = c; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\c", i);
		}
	} else if (c >= 98)
	{
		for (j = c; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\c", j);
		}
	}
}

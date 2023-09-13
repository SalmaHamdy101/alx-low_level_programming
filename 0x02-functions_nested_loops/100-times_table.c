#include "main.h"
void print_times_table(int c)
{
	int i, j, k;

	if (c >= 0 && c <= 15)
	{
		for (i = 0; i <= c; i++)
		{
			for (j = 0; j <= c; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

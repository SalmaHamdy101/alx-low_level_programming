#include "main.h"
void jack_bauer(void)
{
	int i,lj;

	i = 0;

	while (i < 24)
	{
		l = 0;
		while (l < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar(l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		i++;
	}
}

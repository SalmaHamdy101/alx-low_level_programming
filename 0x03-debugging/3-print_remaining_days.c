#include <stdio.h>
#include "main.h"
 
void print_remaining_days(int month, int day, int y )
{
if ((y  % 100 == 0 && y  % 400 == 0) || (y r % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the y : %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, y );
}
else
{
printf("Day of the y : %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}

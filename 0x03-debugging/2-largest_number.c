#include "main.h"
 
int larg_number(int a, int b, int c)
{
int larg;
if (a > b && a > c)
{
int larg= a;
}
else if (a > b && c > a)
{
larg = c;
}
else if (b > c)
{
larg  = b;
}
else
{
larg = c;
}
return (larg);
}

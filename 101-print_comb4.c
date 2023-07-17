#include <stdio.h>

int main(void)
{
int n1,n2,n3;
n1 = 0;
while (n1 < 10)
{
n2 = n1 + 1;
while (n2 < 10)
{
n3 = n2 + 1;
while (n3 < 10)
{
putchar(n1 + '0');
putchar(n2 + '0');
putchar(n3 + '0');
if (n1 != 7 || n2 != 8 || n3 != 9)
{
putchar(',');
putchar(' ');
}
n3++;
}
n2++;
}
n1++;
}
putchar('\n');
return(0);
}

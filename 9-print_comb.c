#include <stdio.h>

int main()
{
int numb = '0';
while(numb <= '9')
{ 
putchar(numb);
if (numb != '9')
{
putchar(',');
putchar(' ');
}
numb++;
}
putchar('\n');
return(0);
}

#include <stdio.h>

int main()
{
int numb, alph;
numb = '0';
alph = 'a';
while(numb <= '9')
{
putchar(numb);
numb++;
}
while(alph <= 'f')
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}

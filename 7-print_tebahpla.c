#include <stdio.h>

int main()
{
char rev = 'z';
while(rev >= 'a')
{
putchar(rev);
rev--;
}
putchar('\n');
return(0);
}

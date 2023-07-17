#include <stdio.h>

int main ()
{
int alpha = 'a';
while(alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
alpha++;

}

putchar('\n');
return(0);
}

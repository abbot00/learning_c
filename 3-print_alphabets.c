#include <stdio.h>

int main()
{
int l_case = 'a';
int u_cast = 'A';
while (l_case <= 'z')
{
putchar(l_case);
l_case++;
}
while (u_cast <= 'Z')
{
putchar(u_cast);
u_cast++;
}
putchar('\n');
return (0);
}
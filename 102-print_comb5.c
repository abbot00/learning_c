#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
int n1, n2;
n1 = 0;
while (n1 <= 98)
{
n2 = n1 + 1;
while (n2 <= 99)
{
putchar(n1 / 10 + '0');
putchar(n1 % 10 + '0');
putchar(' ');
putchar(n2 / 10 + '0');
putchar(n2 % 10 + '0');
if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}

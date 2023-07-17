#include <stdio.h>
/**
 * main - main prints all possible diferent combinations of two digits
 * numbers must be separeted by ',' followed by a space.
 * the two digits must be different
 * Return: - program returns a zero if ran correctly
 */
int main(void)
{
int n1, n2;
while (n1 < 10)
{
n2 = n1 + 1;
while (n2 < 10)
{
putchar(n1 + '0');
putchar(n2 + '0');
if (n1 != 8 || n2 != 9)
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

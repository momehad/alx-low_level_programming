#include "main.h"


/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */

int main(void)
{
char c[10] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}

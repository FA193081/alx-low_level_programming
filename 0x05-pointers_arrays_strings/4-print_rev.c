#include "main.h"
#include <stdio.h>

/**
 * print_rev -prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
int i;
for (i = strlen(s) - 1; i >= 0; 1--)
{
_putcha(s[i]);
}
_putcha('\n');
}

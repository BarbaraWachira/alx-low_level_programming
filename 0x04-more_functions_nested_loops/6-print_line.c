#include <stdio.h>
#include "main.h"

/**
  * print_line - draws a staright line in the terminal
  * @n: number of times character _ should be printed
  * Return: nothing
  */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;

		for (r = 1; r <= n; r++)
		{
			putchar(');
		}
		_putchar('\n');
	}
}

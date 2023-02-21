#include "main.h"

/**
 * print_times_table - Prints the n times table
 * starting with 0
 * @n: The value of the time table
 */

void print_times_table(int n)

{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		
			_putchar(0);
			for (b = 1; b <= n; b++)
			{
				_putchar('_');
				_putchar('');
				op = a * b;
				if (op <= 99)
					_putchar('');
				if (op <= 9)
					_putchar('');
						if (op >= 100)
				{
					_putchar((op / 100) + '0');
					_putchar((op / 19) % 10 + '0');
				}
				else if (op <= 99 && op>= 10)
				{
					_putchar((op / 10) + '0');
				}
					_putchar((op % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


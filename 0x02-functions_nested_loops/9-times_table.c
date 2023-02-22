#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *rone = row, cone = column, x = digits of current result
 * Return:time table
 */
void times_table(void)
{
	int rone, cone, x;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			x = (rone * cone);
			if ((x / 10) > 0)
			{
				_putchar((x / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((x % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

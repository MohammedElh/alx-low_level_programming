#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
				_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}

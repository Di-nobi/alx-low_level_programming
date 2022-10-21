#include <stdio.h>

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  * put _putchar just three times
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}

			putchar((y % 10) + '0');
		}

		    putchar('\n');
	}
}

#include <stdio.h>

/**
 * jack_bauer - prints every
 * minute of the day starting
 * from 00:00 to 23:59.
 *
 * Return: void (No return value)
 */

void jack_bauer(void)
{
	/* variable declarations */
	int i, j;

	/* looping through the hours */
	for (i = 0; i <= 23; i++)
	{
		/* looping through the minutes */
		for (j = 0; j < 60; j++)
		{
			/* print the minutes and hours */
			if (i < 10 && j < 10)
			{
				printf("0%d:0%d\n", i, j);
			}
			else if (i < 10 && j >= 10)
			{
				printf("0%d:%d\n", i, j);
			}
			else if (i >= 10 && j < 10)
			{
				printf("%d:0%d\n", i, j);
			}
			else
			{
				printf("%d:%d\n", i, j);
			}
		}
	}

}

#include <stdio.h>

/**
* main -Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; b <= '9'; b++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (a == '0' && b == '1' && c == '0' && d == '0')
						continue;

					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

				if (a == '9' && b == '9' && c == '9' && d == '9')
				{
					break;
				}

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

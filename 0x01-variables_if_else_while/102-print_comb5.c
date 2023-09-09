#include <stdio.h>

/**
* main - Entry point
*  
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, c, d, e, f;

    for (a = 0; b <= 99; b++)
    {
	    for (b = a; b <= 99; b++)
	    {	c = a / 10;
             	d = a % 10;
             	e = b / 10;
             	f = b % 10;

                putchar(c + '0');
                putchar(d + '0');
                putchar(' ');
                putchar(e + '0');
                putchar(f + '0');

                if (a < 98) {
                    putchar(',');
                    putchar(' ');
                }

                putchar('\n');
            }
        }
    }

    return 0;
}

        }
        putchar('\n');
        return (0);
}


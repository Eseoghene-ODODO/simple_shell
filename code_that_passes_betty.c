#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry points
 * Return: Always 0 (Success)
 */

int main(void)
{
        char x, y;

        for (y = 0; y <= 10; y++)
        {
                for (x = 'a'; x <= 'z'; x++)
                {
                        printf("%c", x);
                }
                printf("\n");
        }
        return (0);
}

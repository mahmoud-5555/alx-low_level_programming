#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j, k, l;

    for (i = 48; i < 58; i++)
    {
        for (j = 48; j < 58; j++)
        {
            for (k = i; k < 58; k++)
            {    
                for (l = j+1; l < 58; l++)
                {
                    putchar(i);
                    putchar(j);
                    putchar(' ');
                    putchar(k);
                    putchar(l);
                    putchar(',');
                    putchar(' ');
               }
            }
        }    
    }
    putchar('\n');
    return (0);
        
}

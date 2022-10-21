#include "main.h"

void function( int x)
{
    int x;
    for (x >= '0'; x <= '9'; x++)
        {
            printf(x);    
            if ((x != 4) && (x != 7))
            {
                printf('%d', x);
            }
        }
        return (0);
}
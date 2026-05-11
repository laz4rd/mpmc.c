#include <reg51.h>

void delay() {
    int i,j;
    for ( i = 0; i < 256; i++)
    {
        for ( j = 0; j < 256; i++)
        {
            /* software loop */
        }
        
    }
    
}

void main() {
    while (1)
    {
        P1 = 0x01;
        delay();
        P1 = 0x00;
        delay();
    }
    
}
#include <reg51.h>

void delay() {
    int i,j;

    for ( i = 0; i < 256; i++)
    {
        for ( j = 0; j < 256; j++)
        {
            // software loop
        }
        
    }
}

void main() {
    while (1)
    {
        P1 = 0b10101010; // 0xAA;
        delay();
        P1 = 0b01010101; // 0x55;
        delay();
    }
    
}
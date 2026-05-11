#include <reg51.h>

void delay() {
    int i,j;
    for (i = 0; i < 256; i++)
    {
        for (j = 0; j < 1280; j++)
        {
            // do nothing, software loop implemented
        }
        
    }
}

void main() {
    while(1) {
        P1 = 0xFF; // All ON
        delay();
        P1 = 0x00; // ALL OFF
        delay();
    }
}
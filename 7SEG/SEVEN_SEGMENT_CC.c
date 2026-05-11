#include <reg51.h>

void delay() {
    unsigned int i, j;
    for (i = 0; i < 256; i++) {
        for (j = 0; j < 1280; j++) {
            // do nothing, software loop implemented
        }
    }
}

void main() {
    while (1) {
        // Common Cathode: HIGH turns segments ON
        P1 = 0b00111111; // 0
        delay();
        P1 = 0b00000110; // 1
        delay();
        P1 = 0b01011011; // 2
        delay();
        P1 = 0b01001111; // 3
        delay();
        P1 = 0b01100110; // 4
        delay();
        P1 = 0b01101101; // 5
        delay();
        P1 = 0b01111101; // 6
        delay();
        P1 = 0b00000111; // 7
        delay();
        P1 = 0b01111111; // 8
        delay();
        P1 = 0b01101111; // 9
        delay();
    }
}
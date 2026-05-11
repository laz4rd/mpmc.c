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
        // Common Anode: LOW turns segments ON (inverted logic)
        P1 = 0b11000000; // 0
        delay();
        P1 = 0b11111001; // 1
        delay();
        P1 = 0b10100100; // 2
        delay();
        P1 = 0b10110000; // 3
        delay();
        P1 = 0b10011001; // 4
        delay();
        P1 = 0b10010010; // 5
        delay();
        P1 = 0b10000010; // 6
        delay();
        P1 = 0b11111000; // 7
        delay();
        P1 = 0b10000000; // 8
        delay();
        P1 = 0b10010000; // 9
        delay();
    }
}
# MPMC C Programs

This repository contains simple C programs for the 8051 microcontroller (using the Keil compiler and `reg51.h` header) that demonstrate basic operations with LEDs and 7-segment displays. These programs are ideal for learning microcontroller programming and understanding how to control hardware ports.

## Programs Overview

### 1. LEDs/ALL_ON_OFF.c
- **Purpose**: Blink all 8 LEDs connected to Port 1 (P1) on and off.
- **How it works**:
  - Sets P1 to `0xFF` (all pins high) to turn on all LEDs.
  - Calls a delay function to create a visible pause.
  - Sets P1 to `0x00` (all pins low) to turn off all LEDs.
  - Repeats indefinitely in a `while(1)` loop.

### 2. LEDs/ALT_ON_OFF.c
- **Purpose**: Blink LEDs in an alternating pattern.
- **How it works**:
  - Sets P1 to `0xAA` (binary `10101010`) to turn on every other LED.
  - Delay.
  - Sets P1 to `0x55` (binary `01010101`) to turn on the remaining LEDs.
  - Delay.
  - Repeats indefinitely.

### 3. LEDs/SING_ON_OFF.c
- **Purpose**: Blink a single LED (connected to the least significant bit, P1.0).
- **How it works**:
  - Sets P1 to `0x01` to turn on only the first LED.
  - Delay.
  - Sets P1 to `0x00` to turn off all LEDs.
  - Delay.
  - Repeats indefinitely.
- **Note**: There is a minor bug in the delay loop (the inner loop incorrectly increments `i` instead of `j`), but it still functions as a delay due to the outer loop.

### 4. 7SEG/SEVEN_SEGMENT_CC.c
- **Purpose**: Display digits 0-9 sequentially on a **common cathode** 7-segment display.
- **How it works**:
  - For common cathode displays, a logic HIGH (1) on a segment pin turns that segment ON.
  - The program outputs the 7-segment codes for digits 0 through 9 to P1, with a delay between each digit.
  - The sequence loops indefinitely.

### 5. 7SEG/SEVEN_SEGMENT_CA.c
- **Purpose**: Display digits 0-9 sequentially on a **common anode** 7-segment display.
- **How it works**:
  - For common anode displays, a logic LOW (0) on a segment pin turns that segment ON (since the common pin is connected to VCC).
  - The program outputs the inverted 7-segment codes for digits 0 through 9 to P1, with a delay between each digit.
  - The sequence loops indefinitely.

## Delay Function
All programs use a simple software delay function created with two nested loops. The delay duration depends on the clock frequency of the microcontroller and the loop counts. Adjust the loop limits to change the delay as needed.

## How to Use
1. Copy the desired `.c` file to your 8051 development environment (e.g., Keil µVision).
2. Ensure the project is configured for the 8051 microcontroller (e.g., AT89C51, AT89S52, etc.).
3. Compile and download the hex file to your microcontroller or run it in a simulator.
4. Connect LEDs or a 7-segment display to Port 1 (P1) as per the program's assumptions.

## Learning Points
- Basic I/O port manipulation on the 8051.
- Using software loops for timing delay.
- Understanding LED and 7-segment display interfacing (common cathode vs. common anode).
- Infinite loops for continuous operation.

## Notes
- These programs are written for educational purposes and assume direct connection of LEDs/display to Port 1 without current-limiting resistors (add resistors in hardware for safety).
- The `reg51.h` header is specific to the 8051 architecture and provides special function registers (SFRs) like `P1`.

---
*Created for MPMC (Microprocessor and Microcontroller) lab practice.*
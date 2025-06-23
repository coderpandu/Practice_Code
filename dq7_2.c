#include <stdio.h>

int main() {
    unsigned int a = 5;  // Binary: 0101
    unsigned int b = 3;  // Binary: 0011

    // Bitwise AND
    unsigned int and_result = a & b; // Binary: 0001
    printf("a & b = %u\n", and_result);

    // Bitwise OR
    unsigned int or_result = a | b; // Binary: 0111
    printf("a | b = %u\n", or_result);

    // Bitwise XOR
    unsigned int xor_result = a ^ b; // Binary: 0110
    printf("a ^ b = %u\n", xor_result);

    // Bitwise NOT
    unsigned int not_result = ~a; // Binary: 1010 (inverts all bits)
    printf("~a = %u\n", not_result);

    // Left Shift
    unsigned int left_shift_result = a << 1; // Binary: 1010
    printf("a << 1 = %u\n", left_shift_result);

    // Right Shift
    unsigned int right_shift_result = a >> 1; // Binary: 0010
    printf("a >> 1 = %u\n", right_shift_result);

    return 0;
}



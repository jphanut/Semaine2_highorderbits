#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
uint8_t get_3_leftmost_bits(uint32_t x) {
    return x >> 29;
}

int main()
{
    uint32_t test = 0b11100000000000000000000000000000;
    uint8_t result = get_3_leftmost_bits(test);
    printf("Result :%d\n", result);
    return 0;
}

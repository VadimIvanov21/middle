#include "str_easy.h"

int itc_min_num(long long number) {
    if (number < 0) {
        number *= -1;
    }
    int mini = 0, digit = 0;
    while (number > 0) {
        digit = number % 10;
        if (digit < mini) {
            mini = digit;
        }
        number /= 10;
    }
    return mini;

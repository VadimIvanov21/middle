#include "middle.h"

void itc_num_print(int number){
 cout << number;
}

int itc_len_num(long long number){
int x = 0;
int num;
int a;
while (number > 0){
    num = number % 10;
    x = x + 1;
    number = number / 10;
}
return x;
}

int itc_sum_num(long long number){
int x;
while (number > 0){
    x = x + number % 10;
    number = number / 10;
}
return x;
}

long long itc_multi_num(long long number){
int x;
while (number > 0){
    x = x * number % 10;
    number = number / 10;
}
return x;
}

int itc_max_num(long long number) {
    if (number < 0) {
        number *= -1;
    }
    int maxi = 0, digit = 0;
    while (number > 0) {
        digit = number % 10;
        if (digit > maxi) {
            maxi = digit;
        }
        number /= 10;
    }
    return maxi;

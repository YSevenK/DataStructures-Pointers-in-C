#include <stdio.h>

int main() {
    int num;
    for (num = 100; num < 1000; num++) {
        int units = num % 10;
        int tens = (num / 10) % 10;
        int hundreds = num / 100;
        int cube_sum = units * units * units + tens * tens * tens + hundreds * hundreds * hundreds;
        if (cube_sum == num) {
            printf("%d 是水仙花数\n", num);
        }
    }
    return 0;
}
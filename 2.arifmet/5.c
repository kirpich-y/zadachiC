#include <stdio.h>

int main() {
    float a = 12.5, b = 2.3;
    int n = (int)(a / b);
    float rem = a - n * b;
    printf("%.2f\n", rem);
    return 0;
}
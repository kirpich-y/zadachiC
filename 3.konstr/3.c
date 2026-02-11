#include <stdio.h>

int main() {
    int x = 7;
    switch (x) {
        case 3:
        case 7:
        case 9:
            printf("Число %d входит в набор {3,7,9}\n", x);
            break;
        default:
            printf("Число %d не входит в набор\n", x);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    char ch = 'A' + rand() % 26;
    int i = rand();
    float f = (float)rand();
    double d = (double)rand();
    
    printf("Значения: символ: %c, число: %d, число с плавающей точкой: %f, число с двойной точностью: %f\n",
           ch, i, f, d);
    return 0;
}
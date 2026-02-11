#include <stdio.h>

int main() {
    int x = 2, y = 3;
    float dist;
    
    int sum = x*x + y*y;
    
    dist = sum / 2.0; 
    for (int i = 0; i < 10; i++) {
        dist = (dist + sum / dist) / 2.0;
    }
    
    printf("%.2f\n", dist);
    return 0;
}
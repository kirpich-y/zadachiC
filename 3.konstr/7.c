#include <stdio.h>

int main() {
    int score;
    printf("Введите оценку (0-100): ");
    scanf("%d", &score);
    
    if (score >= 90)
        printf("Excellent\n");
    else if (score >= 75)
        printf("Good\n");
    else if (score >= 50)
        printf("Satisfactory\n");
    else
        printf("Unsatisfactory\n");
    return 0;
}
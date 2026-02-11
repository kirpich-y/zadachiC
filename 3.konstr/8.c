#include <stdio.h>

int main() {
    int month, year, days;
    printf("Введите месяц (1-12) и год: ");
    scanf("%d %d", &month, &year);
    
    if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    
    printf("В месяце %d года %d: %d дней\n", month, year, days);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    
    printf("первая строка");
    fgets(s1, 100, stdin);
    s1[strcspn(s1, "\n")] = '\0';
    
    printf("вторая строка ");
    fgets(s2, 100, stdin);
    s2[strcspn(s2, "\n")] = '\0';
    
    if (strcmp(s1, s2) == 0)
        printf("Strings match\n");
    else
        printf("Strings differ\n");
    
    return 0;
}
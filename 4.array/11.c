#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[1000];
    
    printf("Вводите строки: \n");
    while (1) {
        printf("> ");
        if (!fgets(line, 1000, stdin)) break;
        line[strcspn(line, "\n")] = '\0';
        
        if (strlen(line) == 0) break;
        
        for (int i = 0; line[i]; i++) {
            putchar(toupper(line[i]));
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n = 4; 
    char huruf = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", huruf);
            huruf++;
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, isPrima = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n <= 1) isPrima = 0;

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrima = 0;
            break;
        }
    }

    if (isPrima)
        printf("Bilangan prima\n");
    else
        printf("Bukan bilangan prima\n");

    return 0;
}

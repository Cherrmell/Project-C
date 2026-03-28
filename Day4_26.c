#include <stdio.h>

int main() {
    int angka = 7, tebakan;

    do {
        printf("Tebak angka (1-10): ");
        scanf("%d", &tebakan);

        if (tebakan > angka)
            printf("Terlalu besar!\n");
        else if (tebakan < angka)
            printf("Terlalu kecil!\n");

    } while (tebakan != angka);

    printf("Benar!\n");
    return 0;
}

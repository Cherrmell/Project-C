#include <stdio.h>

int main() {
    int n, i;
    float angka, total = 0;

    printf("Berapa data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%f", &angka);
        total += angka;
    }

    printf("Rata-rata = %.2f\n", total / n);
    return 0;
}

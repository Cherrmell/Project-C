#include <stdio.h>

int main() {
    int n, balik = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while (n != 0) {
        balik = balik * 10 + n % 10;
        n /= 10;
    }

    printf("Hasil balik: %d\n", balik);
    return 0;
}

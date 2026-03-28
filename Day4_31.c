#include <stdio.h>

int main() {
    int n, jumlah = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while (n != 0) {
        jumlah += n % 10;
        n /= 10;
    }

    printf("Jumlah digit: %d\n", jumlah);
    return 0;
}

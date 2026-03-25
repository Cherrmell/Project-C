#include <stdio.h>

#define MAX 100

int hitungTotal(int harga[], int jumlah[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += harga[i] * jumlah[i];
    }
    return total;
}

int main() {
    int harga[MAX], jumlah[MAX];
    char nama[MAX][50];
    int n;

    printf("Jumlah barang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBarang ke-%d\n", i+1);
        printf("Nama: ");
        scanf("%s", nama[i]);

        printf("Harga: ");
        scanf("%d", &harga[i]);

        printf("Jumlah: ");
        scanf("%d", &jumlah[i]);
    }

    int total = hitungTotal(harga, jumlah, n);

    float diskon = 0;
    if (total > 100000)
        diskon = total * 0.1;

    float bayar = total - diskon;

    printf("\n=== STRUK ===\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d x %d = %d\n",
            nama[i],
            harga[i],
            jumlah[i],
            harga[i] * jumlah[i]);
    }

    printf("Total: %d\n", total);
    printf("Diskon: %.0f\n", diskon);
    printf("Bayar: %.0f\n", bayar);

    return 0;
}

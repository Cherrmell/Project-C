#include <stdio.h>

int main() {
    int pilihan, jumlah;
    float harga = 0, total, diskon = 0, bayar;

    printf("=== MENU MAKANAN ===\n");
    printf("1. Nasi Goreng  : 15000\n");
    printf("2. Mie Goreng   : 12000\n");
    printf("3. Ayam Geprek  : 18000\n");
    printf("====================\n");

    printf("Pilih menu (1-3): ");
    scanf("%d", &pilihan);

    printf("Jumlah beli: ");
    scanf("%d", &jumlah);

    // menentukan harga
    if (pilihan == 1) {
        harga = 15000;
    } else if (pilihan == 2) {
        harga = 12000;
    } else if (pilihan == 3) {
        harga = 18000;
    } else {
        printf("Pilihan tidak valid!\n");
        return 0;
    }

    total = harga * jumlah;

    // diskon jika total > 50000
    if (total > 50000) {
        diskon = total * 0.1;
    }

    bayar = total - diskon;

    printf("\nTotal harga : %.0f\n", total);
    printf("Diskon      : %.0f\n", diskon);
    printf("Total bayar : %.0f\n", bayar);

    return 0;
}

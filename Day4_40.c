#include <stdio.h>

int main() {
    int pilihan;
    float saldo = 1000000; // saldo awal
    float jumlah;

    do {
        printf("\n=== MENU ATM ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Setor Uang\n");
        printf("3. Tarik Uang\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Saldo anda: %.0f\n", saldo);
        }
        else if (pilihan == 2) {
            printf("Masukkan jumlah setor: ");
            scanf("%f", &jumlah);
            saldo += jumlah;
            printf("Berhasil setor!\n");
        }
        else if (pilihan == 3) {
            printf("Masukkan jumlah tarik: ");
            scanf("%f", &jumlah);

            if (jumlah > saldo) {
                printf("Saldo tidak cukup!\n");
            } else {
                saldo -= jumlah;
                printf("Berhasil tarik!\n");
            }
        }

    } while (pilihan != 4);

    printf("Terima kasih!\n");
    return 0;
}

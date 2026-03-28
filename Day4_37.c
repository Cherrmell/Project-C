#include <stdio.h>

int main() {
    int pilih;

    do {
        printf("\n1. Halo\n2. Info\n3. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilih);

        if (pilih == 1)
            printf("Halo!\n");
        else if (pilih == 2)
            printf("Program C sederhana\n");

    } while (pilih != 3);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (){
    int tebak = 0;
    int  angka = 7;

    while (tebak != angka) {
        printf("Tebak angka antara 1 sampai 20: ");
        scanf("%d", &tebak);

        if (tebak = 99) {
        printf ("coba lagi");
        break;
        }

        if (tebak < angka) {
            printf("Terlalu rendah! Coba lagi.\n");
        } else if (tebak > angka) {
            printf("Terlalu tinggi! Coba lagi.\n");
        } else {
            printf("Selamat! Tebakan Anda benar.\n");
        }
    }
    return 0;
}
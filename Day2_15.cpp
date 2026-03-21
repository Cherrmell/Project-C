#include <stdio.h>

float a, b;

void inputBilangan() {
    printf("Masukkan bilangan pertama= ");
    scanf(" %f", &a);  
    printf("Masukkan bilangan kedua= ");
    scanf(" %f", &b);  
}

void tambah() {
    printf("Hasil: %.2f\n", a + b);
}

void kurang() {
    printf("Hasil: %.2f\n", a - b);
}

void kali() {
    printf("Hasil: %.2f\n", a * b);
}

void bagi() { 
    if (b != 0)
        printf("Hasil: %.2f\n", a / b); 
    else 
        printf("Tidak bisa dibagi dengan nol!\n");
}

int main() {
    int pilihan = 0;

    while (pilihan != 5) {
        printf("\nPilih operasi:\n");
        printf("1. Tambah (+)\n");
        printf("2. Kurang (-)\n");
        printf("3. Kali (x)\n");
        printf("4. Bagi (/)\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf(" %d", &pilihan);  
        if (pilihan >= 1 && pilihan <= 4) {
            inputBilangan();
        }

        if (pilihan == 1) tambah();
        else if (pilihan == 2) kurang();
        else if (pilihan == 3) kali();
        else if (pilihan == 4) bagi();
        else if (pilihan == 5)
            printf("Program selesai.\n");
        else 
            printf("Pilihan tidak sesuai!\n");
    }
}

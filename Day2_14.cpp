#include <stdio.h>

int main() {
    int baris = 4;   
    int kolom = 5;   
    int angka = 1;  

    for (int i = 0; i < baris; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < kolom; j++) {
                printf("%3d", angka);
                angka++;
            }
        } else {
            
            int akhir = angka + kolom - 1;  
            for (int j = 0; j < kolom; j++) {
                printf("%3d", akhir - j);
                angka++;
            }
        }
        printf("\n"); 
    }

    return 0;
}
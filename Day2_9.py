#include <stdio.h>

void ubahNilai(int *x) {
    *x = 100; 
}

int main() {
    int angka = 10;

    printf("Sebelum: %d\n", angka);

    ubahNilai(&angka);  

    printf("Sesudah: %d\n", angka);

    return 0;
}

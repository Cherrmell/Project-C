#include <stdio.h>

int jumlahDigit(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + jumlahDigit(n / 10);
}

int main() {
    int angka = 1234;
    printf("Hasil: %d", jumlahDigit(angka));
    return 0;
}

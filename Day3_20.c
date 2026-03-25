#include <stdio.h>

int reverse(int n, int hasil) {
    if (n == 0)
        return hasil;
    return reverse(n / 10, hasil * 10 + (n % 10));
}

int main() {
    int angka = 1234;
    printf("Hasil: %d", reverse(angka, 0));
    return 0;
}

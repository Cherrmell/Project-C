#include <stdio.h>

int main() {
    int n, asli, balik = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    asli = n;

    while (n != 0) {
        balik = balik * 10 + n % 10;
        n /= 10;
    }

    if (asli == balik)
        printf("Palindrome\n");
    else
        printf("Bukan palindrome\n");

    return 0;
}

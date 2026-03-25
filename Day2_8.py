#include <stdio.h>

int faktorial(int n) {
    if (n == 0) {
        return 1;  // base case
    } else {
        return n * faktorial(n - 1);  // rekursif
    }
}

int main() {
    int hasil = faktorial(5);
    printf("Hasil: %d\n", hasil);

    return 0;
}

#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;

    int quotient = x / y;   // hasil bagi
    int remainder = x % y;  // sisa bagi

    printf("Nilai x = %d\n", x);
    printf("Nilai y = %d\n", y);
    printf("Hasil bagi (quotient) = %d\n", quotient);
    printf("Sisa bagi (remainder) = %d\n", remainder);

    return 0;
}

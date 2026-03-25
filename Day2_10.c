#include <stdio.h>

int pangkat(int a, int b) {
    if (b == 0) return 1;
    return a * pangkat(a, b-1);
}

int main() {
    printf("%d", pangkat(2, 5));
}

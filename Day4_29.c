#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Masukkan: ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+') printf("= %.2f\n", a + b);
    else if (op == '-') printf("= %.2f\n", a - b);
    else if (op == '*') printf("= %.2f\n", a * b);
    else if (op == '/') printf("= %.2f\n", a / b);
    else printf("Operator salah\n");

    return 0;
}

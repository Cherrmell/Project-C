#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (nilai >= 85)
        printf("Grade A\n");
    else if (nilai >= 70)
        printf("Grade B\n");
    else if (nilai >= 60)
        printf("Grade C\n");
    else if (nilai >= 50)
        printf("Grade D\n");
    else
        printf("Grade E\n");

    return 0;
}

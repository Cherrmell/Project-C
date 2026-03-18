#include <stdio.h>

void Angka(int *input) {
    printf("Masukkan angka integer: ");
    scanf("%d", input);
}

void Dobel(int *nilai) {
    *nilai = (*nilai) * 5;
}

int main() {

    int nilai;

    Angka(&nilai);
    Dobel(&nilai);

    printf("Angka setelah dikalikan 5 = %d\n", nilai);

    return 0;
}
#include <stdio.h>

int main() {
    int baris, kolom;
    int A[10][10], B[10][10], hasil[10][10];
    int i, j;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    printf("\nMasukkan elemen matriks A:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMasukkan elemen matriks B:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nHasil Penjumlahan Matriks:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            hasil[i][j] = A[i][j] + B[i][j];
            printf("%d\t", hasil[i][j]);
        }
        printf("\n");
    }

    printf("\nHasil Pengurangan Matriks:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            hasil[i][j] = A[i][j] - B[i][j];
            printf("%d\t", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}

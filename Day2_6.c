#include <stdio.h>
#include <stdlib.h>

int main() {
    int U, nA, nB, irisan;
    int gabungan, beda_setangkup, komplemen;
    
    printf("Masukkan banyak elemen semesta U: ");
    scanf("%d", &U);

    printf("Masukkan banyak elemen himpunan A: ");
    scanf("%d", &nA);
    int A[nA];
    printf("Masukkan elemen-elemen himpunan A: ");
    for(int i=0; i<nA; i++){
        scanf("%d", &A[i]);
    }

    printf("Masukkan banyak elemen himpunan B: ");
    scanf("%d", &nB);
    int B[nB];
    printf("Masukkan elemen-elemen himpunan B: ");
    for(int i=0; i<nB; i++){
        scanf("%d", &B[i]);
    }

    printf("Masukkan banyak elemen intersection A n B: ");
    scanf("%d", &irisan);

    // hitung
    gabungan = nA + nB - irisan;
    beda_setangkup = nA + nB - 2 * irisan;
    komplemen = U - gabungan;

    printf("Banyak elemen gabungan (A u B) = %d\n", gabungan);
    printf("Banyak elemen komplemen (U - (A u B)) = %d\n", komplemen);
    printf("Banyak elemen beda setangkup (A ? B) = %d\n", beda_setangkup);

    system("pause");
    return 0;
}

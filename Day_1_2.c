#include <stdio.h>

#define MAX 10   

typedef struct {
    char nama[50];      
    float tugas;        
    float uts;         
    float uas;          
    float nilaiAkhir;   
} Mahasiswa;

float hitungNilaiAkhir(float tugas, float uts, float uas) {
    return 0.3 * tugas + 0.3 * uts + 0.4 * uas;
}

float prosesRemedial(float nilaiAkhir) {
    float remedial;

    printf("Masukkan nilai remedial: ");
    scanf("%f", &remedial);

    if (remedial > nilaiAkhir)
        return remedial;
    else
        return nilaiAkhir;
}

char tentukanPredikat(float nilai) {
    if (nilai >= 80)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 60)
        return 'C';
    else
        return 'D';
}

float hitungRataRata(Mahasiswa mhs[], int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += mhs[i].nilaiAkhir;
    }

    return total / n;
}

float nilaiTertinggi(Mahasiswa mhs[], int n) {
    float max = mhs[0].nilaiAkhir; 

    for (int i = 1; i < n; i++) {
        if (mhs[i].nilaiAkhir > max)
            max = mhs[i].nilaiAkhir;
    }

    return max;
}

float nilaiTerendah(Mahasiswa mhs[], int n) {
    float min = mhs[0].nilaiAkhir; 

    for (int i = 1; i < n; i++) {
        if (mhs[i].nilaiAkhir < min)
            min = mhs[i].nilaiAkhir;
    }

    return min;
}

int main() {
    Mahasiswa mhs[MAX];  
    int n;               
    int jumlahA = 0, jumlahB = 0, jumlahC = 0, jumlahD = 0; 

    printf("Masukkan jumlah mahasiswa (maks 10): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i+1);

        printf("Nama: ");
        scanf("%s", mhs[i].nama);

        printf("Nilai Tugas: ");
        scanf("%f", &mhs[i].tugas);

        printf("Nilai UTS: ");
        scanf("%f", &mhs[i].uts);

        printf("Nilai UAS: ");
        scanf("%f", &mhs[i].uas);

        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].tugas,
            mhs[i].uts,
            mhs[i].uas
        );

        if (mhs[i].nilaiAkhir < 60) {
            mhs[i].nilaiAkhir = prosesRemedial(mhs[i].nilaiAkhir);
        }

        char predikat = tentukanPredikat(mhs[i].nilaiAkhir);

        if (predikat == 'A') jumlahA++;
        else if (predikat == 'B') jumlahB++;
        else if (predikat == 'C') jumlahC++;
        else jumlahD++;
    }

    printf("\n===== HASIL REKAP =====\n");

    printf("Rata-rata kelas: %.2f\n", hitungRataRata(mhs, n));

    printf("Jumlah A: %d\n", jumlahA);
    printf("Jumlah B: %d\n", jumlahB);
    printf("Jumlah C: %d\n", jumlahC);
    printf("Jumlah D: %d\n", jumlahD);

    printf("Nilai tertinggi: %.2f\n", nilaiTertinggi(mhs, n));
    printf("Nilai terendah: %.2f\n", nilaiTerendah(mhs, n));

    return 0; 
}
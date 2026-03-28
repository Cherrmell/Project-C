#include <stdio.h>

int main() {
    char kalimat[100];
    int i, vokal = 0;

    printf("Masukkan kalimat: ");
    scanf("%[^\n]", kalimat);

    for (i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
            vokal++;
    }

    printf("Jumlah vokal: %d\n", vokal);
    return 0;
}

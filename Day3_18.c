#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int nilai;
};

int main() {
    struct Mahasiswa m = {"Emelli", 90};

    printf("%s - %d", m.nama, m.nilai);
}

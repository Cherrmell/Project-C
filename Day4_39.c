#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, komputer;

    srand(time(0));
    komputer = rand() % 3;

    printf("0 = Batu, 1 = Gunting, 2 = Kertas\n");
    printf("Pilihan kamu: ");
    scanf("%d", &user);

    printf("Komputer pilih: %d\n", komputer);

    if (user == komputer)
        printf("Seri!\n");
    else if ((user == 0 && komputer == 1) ||
             (user == 1 && komputer == 2) ||
             (user == 2 && komputer == 0))
        printf("Kamu menang!\n");
    else
        printf("Kamu kalah!\n");

    return 0;
}

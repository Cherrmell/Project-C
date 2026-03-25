#include <stdio.h>

void printArrayValues(int scores[], int scores_len);

int main() {
    int scores[] = {-27, 87, 34};
    int scores_length = sizeof(scores) / sizeof(scores[0]);

    printArrayValues(scores, scores_length);

    return 0;
}

void printArrayValues(int scores[], int scores_len) {
    for (int i = 0; i < scores_len; i++) {
        printf("%d ", scores[i]);
    }
}

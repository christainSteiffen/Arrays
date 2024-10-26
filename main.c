#include <stdio.h>

void printMuster1() {
    int zahlen[3] = {1, 2, 3};
    int array[5][5] = {0};

    array[0][0] = 1;
    array[0][4] = 1;
    array[1][1] = 1;
    array[1][3] = 1;
    array[2][2] = 1;
    array[3][1] = 1;
    array[3][3] = 1;
    array[4][0] = 1;
    array[4][4] = 1;

    printf("Muster 1:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void printMuster2() {
    int werte[4] = {1, 3, 7, 3};
    int array[5][5] = {0};

    array[0][0] = 1;
    array[0][1] = 1;
    array[0][2] = 1;
    array[0][3] = 1;
    array[0][4] = 1;
    array[2][2] = 1;
    array[3][1] = 1;
    array[3][3] = 1;


    printf("Muster 2:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printMuster1();
    printf("\n");
    printMuster2();
    return 0;
}

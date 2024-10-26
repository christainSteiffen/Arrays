#include <stdio.h>

int main() {
    int noten[10];
    int summe = 0;
    float durchschnitt;

    printf("Bitte geben Sie 10 Noten ein:\n");
    for (int i = 0; i < 10; i++) {
        printf("Note %d: ", i + 1);
        scanf("%d", &noten[i]);
        summe += noten[i];
    }

    durchschnitt = summe / 10.0;

    printf("Summe der Noten: %d\n", summe);
    printf("Durchschnitt der Noten: %.2f\n", durchschnitt);

    return 0;
}

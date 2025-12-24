 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, answer, userAnswer;
    int correct = 0;
    int rounds = 5;

    clock_t start, end;
    double timeSpent;

    srand(time(NULL));

    printf("Sayi toplama sürət oyununa xoş geldiniz!\n");
    printf("Toplam %d sual olacaq.\n\n", rounds);

    start = clock();

    for (int i = 1; i <= rounds; i++) {
        a = rand() % 50 + 1;
        b = rand() % 50 + 1;
        answer = a + b;

        printf("%d) %d + %d = ", i, a, b);
        scanf("%d", &userAnswer);

        if (userAnswer == answer) {
            printf("Dogru!\n\n");
            correct++;
        } else {
            printf("Sehv! Dogru cavab: %d\n\n", answer);
        }
    }

    end = clock();
    timeSpent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Oyun bitdi!\n");
    printf("Dogru cavablar: %d / %d\n", correct, rounds);
    printf("Umumi vaxt: %.2f saniye\n", timeSpent);

    return 0;
}

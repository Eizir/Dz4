#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
    int A, B;
    printf("Введите сумму A: ");
    scanf_s("%d", &A);

    printf("Введите сумму B: ");
    scanf_s("%d", &B);

    if ((A % 2) != (B % 2)) {
        printf("Код сгенерирован\n");
    }
    else {
        printf("Код не сгенерирован\n");
    }

    return 0;
}
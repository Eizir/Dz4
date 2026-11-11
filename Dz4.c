#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int A, B;
    int condition;
    printf("==========КОД ДОСТУПА==========")
    printf("Введите число A: ");
    scanf("%d", &A);

    printf("Введите число B: ");
    scanf("%d", &B);
    condition = ((A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0));
    printf("Код сгенерирован (1 - да, 0 - нет") : %d\n", condition);
    return 0;
}

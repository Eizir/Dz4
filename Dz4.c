#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
    int A, B;
    printf("Введите число A: ");
    scanf("%d", &A);

    printf("Введите число B: ");
    scanf_s("%d", &B);
	((A % 2) != (B % 2)) ? printf("Код сгенерирован\n") : printf("Код не сгенерирован\n");
	return 0;
}

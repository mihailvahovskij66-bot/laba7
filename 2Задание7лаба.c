#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main()
{
    setlocale(LC_ALL, "");
    float x, y;
    char c;
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);
    printf("Результат: ");
    switch (c)
    {
    case '+':
        printf("%f", x + y);
        break;
    case '-':
        printf("%f", x - y);
        break;
    case '*':
        printf("%f", x * y);
        break;
    case '/':
        if (y == 0) {
            printf("Ошибка! Деление на ноль.");
        }
        else {
            printf("%f", x / y);
        }
        break;

    case '^':
        printf("%f", pow(x, y));
        break;
    default:
        printf("Ошибка! Неизвестный оператор.");
        break;
    }
    printf("\n");
    return 0;
}
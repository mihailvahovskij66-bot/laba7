#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    int jan1_day;
    int k;    
    int day_of_week; 
    printf("Введите день недели 1 января (1-Пн, 2-Вт, ..., 7-Вс): ");
    scanf("%d", &jan1_day);
    printf("Введите номер дня в году (k): ");
    scanf("%d", &k);
    day_of_week = (jan1_day + k - 1) % 7;
    if (day_of_week == 0) {
        day_of_week = 7;
    }
    printf("День недели для %d-го дня года: ", k);
    switch (day_of_week)
    {
    case 1: printf("Понедельник\n"); break;
    case 2: printf("Вторник\n"); break;
    case 3: printf("Среда\n"); break;
    case 4: printf("Четверг\n"); break;
    case 5: printf("Пятница\n"); break;
    case 6: printf("Суббота\n"); break;
    case 7: printf("Воскресенье\n"); break;
    default: printf("Ошибка!\n");
    }
    return 0;
}
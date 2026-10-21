#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <Windows.h>
int task0();
int task1();
int task1a();
int task2();
int task3();

int main()
{

    SetConsoleOutputCP(65001);
    task0();
    task1();
    task1a();
    task2();
    task3();
}

int task0()
{
    int n, i;
    char s1, s2;

    printf("Задание 0\n");
    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите первый символ: ");
    scanf(" %c", &s1);

    printf("Введите второй символ: ");
    scanf(" %c", &s2);

    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
            printf("%c", s1);
        else
            printf("%c", s2);
    }

    printf("\n");
    return 0;
}

int task1()
{
    int m, n, i, k = 1;
    int s = 0;

    printf("\nЗадание 1\n");
    printf("Введите m и n: ");

    if (scanf("%d%d", &m, &n) != 2 || m > n)
    {
        printf("Ошибка ввода\n");
        return 1;
    }

    for (i = m; i <= n; i++)
    {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    printf("Результат: %d\n", s);
    return 0;
}

int task1a()
{
    int n, i;
    double result = 1.0;

    printf("\nЗадание 1А\n");
    printf("Введите степень n (от 0 до 30): ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 30)
    {
        printf("Ошибка! Введите целое число от 0 до 30.\n");
        return 1;
    }

    for (i = 0; i <= n; i++)
    {
        if (i == 0)
            result = 1.0;
        else
            result *= 2.0;

        printf("2^%d = %10.0f\n", i, result);
    }

    printf("Результат: %.1fK\n", result / 1024.0);

    return 0;
}


int task2()
{
    double x, y, h;

    printf("Функция: y = x^2 - cos^2(x + 1)\n");
    printf("Введите шаг табуляции");
    scanf("%lf", &h);

    if (h <= 0)
    {
        printf("Шаг должен быть больше нуля.\n");
        return 1;
    }

    printf("\n--------------------------------\n");
    printf("|     x     |       f(x)       |\n");
    printf("--------------------------------\n");

    for (x = 0.1; x <= 2.2 + 1e-9; x += h)
    {
        y = x * x - pow(cos(x + 1), 2);
        printf("| %9.3f | %16.6f |\n", x, y);
    }

    printf("--------------------------------\n");

    return 0;
}

int task3()
{

    int N;
    double sum = 0.0;

    printf("Введите целое положительное число N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("введено некорректное число.\n");
        return 1;
    }
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("Результат для N = %d равен: %.6f\n", N, sum);

    return 0;
}
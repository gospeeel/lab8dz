#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double x, n, s=0;
	printf("Вычисляемое выражение: sin(x) + sin^2(x) + ... sin^n(x)\n\n");
	printf("Введите  значение x:");
	scanf("%lf", &x);
	printf("Введите значение n:");
	scanf("%lf", &n);
	sin(x);
	for (int i = 1; i < n; ++i) {
		s += pow(sin(x), i);
	}
	printf("Результат: %lf", s);
} // вариант 19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
main() {
	setlocale(LC_CTYPE, "RUS");
	// -3;-3 Принадлежит
	double x, y;
	printf("Введите ваш x,y через пробел: ");
	scanf("%lf %lf", &x, &y);
	if (x >= -4.5 && x <= 0 && y >= -4.5 && y <= 0 && x * x + y * y > 3)
		printf("Точка принадлежит\n");
	else
		printf("Точка не принадлежит\n");
}
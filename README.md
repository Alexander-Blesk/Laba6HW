# Laba6HW
# Домашняя работа (Условие)

<img width="438" height="292" alt="image" src="https://github.com/user-attachments/assets/c6ff8785-c7d8-41a0-beab-dfd4d281cd44" />

# Алгоритм и блок-схема

1. Начало
   
2. Настройка русской локализации
  
3. Получение переменных от пользователя

4. Проверить условие попадания точки по формуле
   ```x >= -4.5 && x <= 0 && y >= -4.5 && y <= 0 && x * x + y * y > 3```

5. Если условие верно, вывести сообщение, что точка принадлежит

6. Если условие неверно, вывести сообщение, что точка не принадлежит

7. Конец

# Блок-схема 

<img width="647" height="600" alt="image" src="https://github.com/user-attachments/assets/21899fcc-0f72-4a0a-bb50-5a57031b14e7" />


# Реализация программы
```
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
```

# Пример работы программы при вводе значений 10 и 4

Контрольный пример программы (-3;-3)
Выход: Точка принадлежит

<img width="451" height="61" alt="image" src="https://github.com/user-attachments/assets/feb91b7c-3df9-4ee3-8528-0e51ad7dab80" />


# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261

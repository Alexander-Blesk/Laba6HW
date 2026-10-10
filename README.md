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

Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E7Vlbj9sqEP41fqmUCuNL7Mck3l6kU6lSVLXbN45NHHqwcTFpkv31B2OITezNZrPZdrVqFBEzwDB8M98AjuMtit17jqr1J5Zh6kCQ7RwvcSB0AYRO8wXZvpWEIWgFOSeZ7tQJluQOm5FauiEZrq2OgjEqSGULU1aWOBWWDHHOtna3FaP2rBXK8UCwTBEdSr%2BSTKxbaQSnnfwDJvnazOyGcdtSINNZr6Reo4xteyLvxvEWnDHRPhW7BaYNeAaXdty7e1oPhnFcinMGkOQuAXffg9toEr9PFtPb5XQ50VpwNkChU6tFNdvwVPeKvkym89RPBOIf4oB8n325%2FWF01WJvwGvULnWVcbFmOSsRvemkc842ZYYbC4GsdX3%2BYaySQlcKf2Ah9jow0EYwKVqLgurWA5AyAjErsOB7aQPHFAnyy14T0qGQH%2Fodhn5mRK4WAh22nom%2BvQlGYKuQ686x0KM6zOVDz4xOpDwx7pVTSI45oQcupZIEDYjbNRF4WSHlna3koQ2RDLwKfyxrSaQeaBD8QnSjdTkS%2FjhpyjlwZJdoap5lOVfljR6EucC7nk1D8Nc9PgQauG2PO1qklcCpjTUE93vLwvkEqKOh7l0W6qO64OsN9ejZQv0UkqdDXUWwfJS9EKWYspyjQiJSYU6kAZgft33uGh7PjhXZYbMT3c8WVc4DxRZXla0kUtjCxf4ivvhDvrjuEWGC4HRyuhpjgisyxn81jHEDmzEHBv0mxoR%2FvTLiFT%2F6s17xz8ljNnQPJKZh2oEhFU3W49hSG%2F7cNGfI%2BYqVYrJCBaFyITOn2UhDVDRadYcFqlOUESSbPrGSHTerOYHSUivfNTriSjUdJpFPuf5VxtQVKketSRllXOnwgPysVkMdO6NEIt7qMbo701tBoxhM%2FLdBv6ktB1VgtP7LexN1w2inEZyjbv%2BgOUezPU7j0JzHqmtW90b%2FOtBM8GbcdAi8HuoqlMw0F2xX8ch2FRxtV97RdnV8wLjaduXCK2bG6Z%2FIjNJKvv%2FWjJehpau3Wp2qJDurtte11tY2w51YU%2FzEzPsk70zv98WLPujNoL7%2BdNeimb4cwfZ%2B9E41AX36a8qkd3vye3eoQJWh6anOjJfQLhyhHbRpFz%2BwHV6Pdde8V0V%2FWXdd70SvlnWJZtRLJqEPfxcL43P8fPU3RjPjpJ4%2FGkDDiwAdeVcUB%2FZZIoRv7dOE7z1bXgPnQCrXJ2zsxqCtBWf%2F4UV7Ik5KVmLFA0qPRIiSvJTVVM6oyNUgSFJEZ7qhIFk2kvTGveMbwlzgC2%2Foi9CObTe0Y%2FsZz3VnvQ59yZ7oc%2BOyZPOwP3zwdH%2FIavd%2FRHsz7v7V8W7%2BBw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №6</a> 

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

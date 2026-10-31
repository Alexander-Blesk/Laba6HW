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

<img width="698" height="657" alt="image" src="https://github.com/user-attachments/assets/d8dc808e-b65b-440b-ae39-71731f3fcc86" />


Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E7Vltj5s4EP41kXqVsjLvycckpNuT2lN0UdXufvOCA7QGc8ZpYH%2F9GWMHCCSbZZPuquoXg8f2zPiZeRgDI2MR57cUpuFn4iM80oGfjwx3pOsaMAC%2FlJKikti2WQkCGvlyUi1YR49IrZTSbeSjrDWREYJZlLaFHkkS5LGWDFJKdu1pG4LbVlMYoI5g7UHclX6NfBZW0onu1PKPKApCZVmzp9VIDNVkuZMshD7ZNUTGcmQsKCGsuovzBcIleAqXat2HI6N7xyhK2DkLIvfRBY%2F31t1kPL11F87d2lmPpRbkd1Co1UpRRrbUk7MmX8bO3DNdBunHqRXdz77cfVe6MlYo8Eq1a9kllIUkIAnEy1o6p2Sb%2BKj0EPBePecTISkXalz4HTFWyMSAW0a4KGQxlqN7IHkGIhIjRgvuA0UYsuhne09QpkKwn7dfuiIR360OZNoaKvsKlYygrYLvO0BMrqox5zcNN2qRiER%2FVE4h2ReEBrgYcxKUIO7CiKF1CkV0dpyHbYh44qXo7yTjRGqApoOfEG%2BlrhGHf%2BqW7RyM%2BJSJo%2B55OxftUi5ClKG84VMX%2FLDBB0sCt2twR4qkEt1pY62D49Fq4XwC1N5UN4aleq8u%2FfdN9cnVUv0UkqdTXWQwv%2BWzIMYIk4DCmCOSIhpxBxA9HFvVA89nxybKkapEx9ki2rkl2KKJtpJMBLb6ohjEF7PLF007IIxlnX44XYwxmn5ByjivQRnuJS2%2BletvLNW9k%2BpEx81bvUL25EFDpP6JPU1fSMkXRcc5Hos3zZyZLutJXWdmstroVcH5IIaApFPZuo1yZDaKkiVaW80UJBxCO7uHdnqbdnb7OWkYV2PdJQvV5A%2FrLhudyW%2FLOlcy6i2T0DR%2FFQun58T54kfwmQpSIx4loPYgQHsO31Pr4Czh3LRPE6Z1tecaOAdSvj%2FWxq4P2oxR8gMtCCYllRKSIMEDjA9EEEdBwrsetyjIVSIY8bf7mRyII9%2Fveej1R8dUhBkQC6MbC7ud25r9xEn8cpE46%2F3yLUeiyY1hD5un42GCK8RjdZ%2Fcpl%2B9VZzlcTr%2BZ7n6N3fG5rCC36vrVd5MfbSBW8w%2BwQeE59D7EQiNKgOqT2zXeX3dF4hjBeFyr6%2B9cFt%2FQjc0dNYrh%2B6sLw80JPHDNrtMhddtXD5RU4paRuz%2FtuU34PmGJGyciUDN%2BIRpyoQWIOQbGEe4qEb4EhiX9uXCBcw86EeQD30mCTkcFlqUEX4XyKtwJkth0uuNV6VAaY8GD%2B%2B4UQ4zkBfdsv7qVZsrvTwklWplrva6EpS2wNi8sZpDVdvpAqX1gTYM1ctwrRGco6540p0Da8%2FT2HXnuerK3b2X15GuDLzvd10HRgN1kV3KzIDCqPV8guocVSYvL428W%2F%2F7qDhd%2F0Eylv8D%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №6</a> 

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

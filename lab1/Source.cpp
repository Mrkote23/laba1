#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNING

#include "stdio.h"
#include <stdlib.h>
#include "conio.h"
#include "malloc.h"
#include <locale>




void main() {

	setlocale(LC_ALL, "Russian");
	int* mas;
	int n;
	int m;
	int p;
	int b = 0;
	int max = 0;
	int min = 0;
	int summ = 0;
	printf("Введите количество строк массива:\n");
	scanf("%d", &n);
	printf("Введите количество столбцов массива:\n");
	scanf("%d", &m);

	printf("Задания 2 и 3(Заполнение массива рандомными числами\n и создание массива проивольного размера):\n\n");

	mas = (int*)malloc(n * m * sizeof(int)); // создание динамического массива вводимого с клавиатуры размера (n x m)
	p = *mas;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			mas[(i * m) + j] = rand() % 100;  // Заполнение массива случайными числами (от 0 до 100)
			printf("%d  ", (mas[(i * m) + j]));

		}
		printf("\n");
	}
	printf("\n");

	printf("Задание 4(Нахождение суммы в строке):\n\n");

	for (int i = 0; i < n; i++) {
		summ = 0;

		for (int j = 0; j < m; j++) {

			summ = summ + mas[(i * m) + j]; // Нахождение суммы чисел в строке массива
		}
		printf("%d строка - %d\n", i + 1, summ);
	}
	printf("\n\n");

	printf("Задание 1(Нахождение разницы между максимумом и минимумом):\n\n");

	for (int i = 0; i < n; i++) {
		summ = 0;

		for (int j = 0; j < m; j++) {

			if (max > mas[(i * m) + j]) { max = mas[(i * m) + j]; }

			if (min < mas[(i * m) + j]) { min = mas[(i * m) + j]; }

		}

	}
	printf(" Максимальное число в массиве - %d\n", max);
	printf(" Минимальное число в массиве - %d\n", min);
	printf(" Разница - %d\n", (max - min));

	free(mas);

}






//////////////////////////////// Часть 2


/*
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNING

#include "stdio.h"
#include <stdlib.h>
#include "conio.h"
#include "malloc.h"
#include <locale>





void main() {  

	setlocale(LC_ALL, "Russian");
	int i, nots = 0;
	char bufer[20];
	char bufername[20];
	int srav;

	struct student {
		char famil[20];
		char name[20];
	} stud[4];


	for (i = 1; i < 4; i++) {

		printf("Введите Фамилию %d-го человека: \n", i);
		scanf("%20s", stud[i].famil);


		printf("Введите Имя %d-го человека:\n", i);
		scanf("%20s", stud[i].name);
		printf("---------------------\n");



	}
	printf("Список:\n");
	for (i = 1; i < 4; i++) {
		printf("№%d %s %s \n", i, stud[i].famil, stud[i].name);
		printf("======\n");
	}

	printf("Введите Фамилию для поиска:\n");
	scanf("%20s", bufer);
	printf("Введите Имя для поиска:\n");
	scanf("%20s", bufername);

	for (i = 1; i < 4; i++) {

		if ((srav = strncmp(stud[i].famil, bufer, 20) == 0) || (srav = strncmp(stud[i].name, bufername, 20) == 0)) {
			printf("Это %d структура, %s %s ", i, stud[i].famil, stud[i].name);
		}
		else { nots = nots + 1; }


	}

	if (nots == 3) {
		printf("Не найдено");
	}
	_getch();



}

*/
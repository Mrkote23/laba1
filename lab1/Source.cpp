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
	printf("������� ���������� ����� �������:\n");
	scanf("%d", &n);
	printf("������� ���������� �������� �������:\n");
	scanf("%d", &m);

	printf("������� 2 � 3(���������� ������� ���������� �������\n � �������� ������� ������������ �������):\n\n");

	mas = (int*)malloc(n * m * sizeof(int)); // �������� ������������� ������� ��������� � ���������� ������� (n x m)
	p = *mas;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			mas[(i * m) + j] = rand() % 100;  // ���������� ������� ���������� ������� (�� 0 �� 100)
			printf("%d  ", (mas[(i * m) + j]));

		}
		printf("\n");
	}
	printf("\n");

	printf("������� 4(���������� ����� � ������):\n\n");

	for (int i = 0; i < n; i++) {
		summ = 0;

		for (int j = 0; j < m; j++) {

			summ = summ + mas[(i * m) + j]; // ���������� ����� ����� � ������ �������
		}
		printf("%d ������ - %d\n", i + 1, summ);
	}
	printf("\n\n");

	printf("������� 1(���������� ������� ����� ���������� � ���������):\n\n");

	for (int i = 0; i < n; i++) {
		summ = 0;

		for (int j = 0; j < m; j++) {

			if (max > mas[(i * m) + j]) { max = mas[(i * m) + j]; }

			if (min < mas[(i * m) + j]) { min = mas[(i * m) + j]; }

		}

	}
	printf(" ������������ ����� � ������� - %d\n", max);
	printf(" ����������� ����� � ������� - %d\n", min);
	printf(" ������� - %d\n", (max - min));

	free(mas);

}






//////////////////////////////// ����� 2


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

		printf("������� ������� %d-�� ��������: \n", i);
		scanf("%20s", stud[i].famil);


		printf("������� ��� %d-�� ��������:\n", i);
		scanf("%20s", stud[i].name);
		printf("---------------------\n");



	}
	printf("������:\n");
	for (i = 1; i < 4; i++) {
		printf("�%d %s %s \n", i, stud[i].famil, stud[i].name);
		printf("======\n");
	}

	printf("������� ������� ��� ������:\n");
	scanf("%20s", bufer);
	printf("������� ��� ��� ������:\n");
	scanf("%20s", bufername);

	for (i = 1; i < 4; i++) {

		if ((srav = strncmp(stud[i].famil, bufer, 20) == 0) || (srav = strncmp(stud[i].name, bufername, 20) == 0)) {
			printf("��� %d ���������, %s %s ", i, stud[i].famil, stud[i].name);
		}
		else { nots = nots + 1; }


	}

	if (nots == 3) {
		printf("�� �������");
	}
	_getch();



}

*/
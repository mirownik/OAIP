#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int tema, nomer;
	printf("tema?:\n");
	scanf_s("%d", &tema);
	switch (tema)
	{
	case 1:
	{
		printf("nomer zadachi?:\n");
		scanf_s("%d", &nomer);
		switch (nomer)
		{
		case 1:
		{
			// task 1
			int a, b;
			printf("vvedite 2 chisla\n");
			scanf_s("%d %d", &a, &b);
			if (a == b)
				printf("chisla ravni =))");
			else
				printf("chisla ne ravni =((");

			return 0;
		}
		case 2:
		{
			// task 2
			int a, b = 50;

			printf("vvedite chislo ot 1 do 100\n\n");
			scanf_s("%d", &a);

			if (a > 100 || a < 1)
				printf("\nti sovsem durak? :p\n");
			else if (a > 50)
				printf("\nchislo bolshe 50 ogo!\n");
			else if (a < 50)
				printf("\nvot blin chislo menshe 50 :(\n");
			else if (a == 50)
				printf("\nabaldet ti napisal 50!! o_O\n");

			return 0;
		}
		case 3:
		{
			// task 3
			char a;

			printf("vvedite cifry ili bykvy!! :p\n");
			scanf_s("%c", &a);

			if (isdigit(a))
				printf("eto cifra!!");
			else if (isalpha(a))
				printf("eto bykva!!");
			else
				printf("ti che vvel dyrak blin o_O");

			return 0;
		}
		case 4:
		{
			// task 4
			int ddmm, day, month;

			printf("vvedite daty vashego rozhdenia v formate ddmm:\n\n");
			scanf_s("%d", &ddmm);

			day = ddmm / 100;
			month = ddmm % 100;

			if ((day >= 21 && month == 3) || (day <= 20 && month == 4))
				printf("\nvash zz: oven");
			else if ((day >= 21 && month == 4) || (day <= 21 && month == 5))
				printf("\nvash zz: telec");
			else if ((day >= 22 && month == 5) || (day <= 21 && month == 6))
				printf("\nvash zz: twins\n");
			else if ((day >= 22 && month == 6) || (day <= 22 && month == 7))
				printf("\nvash zz: rak\n");
			else if ((day >= 23 && month == 7) || (day <= 23 && month == 8))
				printf("\nvash zz: lion\n");
			else if ((day >= 24 && month == 8) || (day <= 22 && month == 9))
				printf("\nvash zz: deva\n");
			else if ((day >= 23 && month == 9) || (day <= 22 && month == 10))
				printf("\nvash zz: vesi\n");
			else if ((day >= 23 && month == 10) || (day <= 23 && month == 11))
				printf("\nvash zz: scorpion\n");
			else if ((day >= 23 && month == 11) || (day <= 23 && month == 12))
				printf("\nvash zz: strelec\n");
			else if ((day >= 22 && month == 12) || (day <= 22 && month == 1))
				printf("\nvash zz: kozerog\n");
			else if ((day >= 21 && month == 1) || (day <= 21 && month == 2))
				printf("\nvash zz: vodoley\n");
			else if ((day >= 21 && month == 2) || (day <= 21 && month == 3))
				printf("\nvash zz: ribi\n");
			else
				printf("\nnevernaya data\n");
			return 0;
		}
		case 5:
		{
			//task 5
			int a, n, i;
			char s1, s2;
			printf("vvedite nomer chasti zadania(1,2,3):\n");
			scanf_s("%d", &a);
			switch (a)
			{
			case 1:
				printf("vvedite kol-vo simvolov:\n");
				scanf_s("%d", &n);

				printf("vvedite simvol:\n");
				scanf_s(" %c", &s1);

				for (i = 0; i < n; i++) {
					printf("%c", s1);
				}
				return 0;
			case 2:
				printf("vvedite kol-vo simvolov:\n");
				scanf_s("%d", &n);

				printf("vvedite simvol pervoy chasti stroki:\n");
				scanf_s(" %c", &s1);

				printf("vvedite simvol vtoroy chasti stroki:\n");
				scanf_s(" %c", &s2);

				for (i = 0; i < n / 2; i++) {
					printf("%c", s1);
				}
				for (i = 0; i < n / 2; i++) {
					printf("%c", s2);
				}
				return 0;
			case 3:
				printf("vvedite kol-vo simvolov:\n");
				scanf_s("%d", &n);

				printf("vvedite simvol pervoy chasti stroki:\n");
				scanf_s(" %c", &s1);

				printf("vvedite simvol vtoroy chasti stroki:\n");
				scanf_s(" %c", &s2);

				for (i = 0; i < n / 2; i++) {
					printf("%c!", s1);
				}
				for (i = 0; i < n / 2; i++) {
					printf("%c!", s2);
				}
				return 0;
			}
		}
		case 6:
		{
			// task 6
			int i, height, length;
			char c;

			printf("vvedite simvol dlya figuri:\n");
			scanf_s(" %c", &c);

			printf("vvedite Height & Length figuri(etc 20 10):\n");
			scanf_s("%d %d", &height, &length);

			for (i = 0; i < length; i++) {
				printf(" %c", c);
			}
			for (i = 0; i < height; i++) {
				printf(" %c\n", c);
			}
			for (i = 0; i < length; i++) {
				printf(" %c", c);
			}
			return 0;
		}
		case 14:
		{
			// task 14
			int n, i, s = 0;
			printf("vvedite chislo\n\n");
			scanf_s("%d", &n);

			for (i = 1; i <= n; i++) {
				s += i * i;
			}
			printf("\nsumma kvadratov chisel: %d\n", s);

			return 0;
		}
		case 15:
		{
			// task 15
			int n, count = 0;

			printf("vvedite chislo:\n\n");
			scanf_s("%d", &n);

			if (n < 50000) {
				while (n > 0) {
					n = n / 10;
					count++;
				}

				printf("\nkolichestvo cifr: %d\n\n", count);
			}
			else {
				printf("\nchislo bolshe 50000\n\n");
			}

			return 0;
		}
		}
	}
	case 2:
	{
		printf("nomer zadachi?:\n");
		scanf_s("%d", &nomer);
		switch (nomer)
		{
		case 1:
		{
			int n;
			printf("vvedite kol-vo elementov massiva:\n");
			scanf("%d", &n);

			int arr[n];
			printf("vvedite elementi massiva:\n");
			for (int i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
			}

			printf("elementi massiva:\n");
			for (int i = 0; i < n; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");

			return 0;
		}
		case 2:
		{

		}
		}
	}
	}
}
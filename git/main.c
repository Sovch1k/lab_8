#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Rus");

	int n1, n2;

	printf("n1 = ");
	scanf_s("%d", &n1);
	printf("n2 = ");
	scanf_s("%d", &n2);
	
	printf("Сумма = %d\n", n1 + n2);
	if (n1 > n2) {
		printf("Разность = %d\n", n1 - n2);
	}
	else {
		printf("Разность = %d\n", n2 - n1);
	}
	printf("Произведение = %d\n", n1 * n2);
}
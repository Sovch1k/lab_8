#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Rus");

	int n1, n2;

	printf("n1 = ");
	scanf_s("%d", &n1);
	printf("n2 = ");
	scanf_s("%d", &n2);
}
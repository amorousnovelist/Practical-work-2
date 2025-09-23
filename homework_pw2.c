#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price = 10; /*B*/
	int X;
	scanf("%i", &X);
	printf("Ткань площадью %.1f стоит %.1f денег\n", X * 0.8, X * 0.8 * price);
}
#include <stdio.h>

int main()
{
	float L = 133.0, n = 2.0;//, k = 3, m = 7; //Вариант 10. Зеленев И. Н.
	puts("Дано:\n");
	printf("\t%8d\n", n);
	printf("\t%8d\n", L);
	puts("\t--------\n");
	puts("Ответ:\n");
	printf("\t%-+3.7f\n", n / L);
}
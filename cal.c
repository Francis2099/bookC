#include<stdio.h>
int main()
{
	float a, b, adi, sub, div, mult;
	printf("Digite dois numeros:\n");
	scanf("%f%f", &a, &b);
	adi = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	printf(" Os numeros digitados foram: %f%f\n ", a, "e", b);
	printf(" A soma dos numeros digitados e: %f\n ", adi);
	printf(" A subtracao entre os numeros digitados e: %f\n ", sub);
	printf(" A multiplicacao dos numeros digitados e: %f\n ", mult);
	printf(" A divisao dos numeros digitados e: %f\n ", div);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

union type
{
	int a;
	float b;
	double c;
	long d;
	char e;
};

int main09()
{
	union type var;
	var.a = 99;
	var.b = 3.14;
	var.e = 'a';
	printf("%d\n", var.a);
	printf("%-5.2f\n", var.b);
	printf("%c\n", var.e);


	return 0;
}
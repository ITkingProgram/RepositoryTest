#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

int main08()
{
	int* p = (int*)malloc(sizeof(int) * 4);
	*p = 123;
	printf("%d\n", *p);
	free(p);
	//p = NULL;
	*p = 89;
	printf("%d\n", *p);
	*p = 99;
	printf("%d\n", *p);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>

struct person
{
	char name[21];
	int count;
};

int main03()
{
	struct person arr[3] = { "A",0,"B",0,"C",0 };
	char arry[51];
	for (int i = 1; i < 4; i++)
	{
		scanf("%s", arry);//���ü�[i]!!!
		for (int j = 0; j < 3; j++)
		{
			if (strcmp(arry, arr[j].name) == 0)//[i]
				arr[j].count++;
		}
	}
	printf("�����\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s: %dƱ\n", arr[i].name, arr[i].count);

	}

	return 0;
}
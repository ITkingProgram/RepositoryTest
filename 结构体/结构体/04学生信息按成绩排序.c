#define _CRT_SECURE_NO_WARNINGS 1 
#define n 2
#include <stdio.h>

struct student
{
	int num;
	char name[21];
	double score;
};

int main04()
{
	struct student stu[2] =
	{
		{110,"king",99},
		{120,"ming",10}
	};
	struct student temp;
	for (int i = 0; i < 2-1; i++)
	{
		for (int j = 0; j < 2-1-i; j++)
		{
			if (stu[j].score < stu[j+1].score)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;

			}
		}

		for (int i = 0; i < 2; i++)
		{
			/*printf("%6d %8s %5.2lf", stu[i].num, stu[i].name, stu[i].score);
			printf("\n");*/
			printf("姓名：%s\n", stu[i].name);
			printf("学号：%d\n", stu[i].num);
			printf("分数：%5.2f\n", stu[i].score);
			printf("\n");
		}
		
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 
#define N 3

#include <stdio.h>

struct student
{
	char name[21];
	int age;
	double source;
	char sex;
};

int main06()
{
	struct student stu[N] =
	{
		{"孙权",18,95.5,'M'},
		{"孙尚香",17,93.5,'F'},
		{"周瑜",16,96.5,'M'}
	};
	struct student* p = stu;
	printf("姓名：        \t年龄：\t分数：\t性别：\n");
	printf("\n");

	//按成绩排序
	for (int i=0;i<N-1;i++)
	{
		for (int j = 0; j < N-1-i; j++)
		{
			if (p[j].source < p[j + 1].source)
			{
				struct student temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	//输出信息
	for (p=stu; p<(stu+N); p++)
	{
		printf("%-11s\t%d\t%5.1f\t%s\t",
			p->name, (*p).age, p->source, p->sex == 'M' ? "男" : "女");
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#define N 3

#include <stdio.h>

struct student
{
	char name[21];
	int num;
	double score[3];
	double aver;
};
int main07()
{
	void input(struct studnet stu[]);
	struct student Max(struct student stu[]);
	void print(struct student stu);

	struct student stu[3];
	struct student* p=stu;
	input(p);
	Max(p);
	print(Max(p));

	printf("全体同学成绩：\n");
	for (int i = 0; i < N; i++)
	{
		printf("学号：%d\t姓名：%s\n语文：%5.1lf\t数学：%5.1lf\t英语：%5.1lf\n平均成绩：%5.1lf\n",
			stu[i].num, stu[i].name, 
			stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].aver);
		printf("\n");
	}

	return 0;
}

void input(struct student stu[])
{
	printf("\t《成绩表》\n");
	printf("\n");
	for (int i = 0; i < N; i ++ )
	{
		int n = i + 1;
		printf("请输入第%d名同学的姓名、学号、成绩（语文，数学，英语）：\n",n);
		scanf("%s%d%lf%lf%lf", stu[i].name, &stu[i].num,
			&stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
		printf("\n");
	}

}

struct student Max(struct student stu[])
{
	int m = 0;
	for (int i = 0; i < N; i++)
	{
		if (stu[i].aver > stu[m].aver)
		{
			m = i;
		}
	}
	return stu[m];
}

void print(struct student stu)
{
	printf("成绩最高的同学：\n");
	printf("学号：%d\t姓名：%s\n语文：%5.1lf\t数学：%5.1lf\t英语：%5.1lf\n平均成绩：%5.1lf\n",
		stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2], stu.aver);
	printf("\n");

	
}
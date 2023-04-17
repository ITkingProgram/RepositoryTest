#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

struct student
{
	char name[21];
	int age;
	double score[2];
	char sex;
};

int main02()
{
	struct student stu[2];
	for (int i = 0; i < 2; i++)
	{
		int n = i + 1;
		printf("请输入第%d名同学的名字：", n);
		scanf("%s", stu[i].name);
		printf("请输入第%d名同学的年龄：", n);
		scanf("%d", &stu[i].age);
		printf("请输入第%d名同学《C语言》的成绩：", n);
		scanf("%lf", &stu[i].score[0]);//scanf是不能加%5.2f的！！！
		printf("请输入第%d名同学《数据结构》的成绩：", n);
		scanf("%lf", &stu[i].score[1]);
		printf("请输入第%d名同学的性别：", n);
		getchar();
		scanf("%c", &stu[i].sex);
		printf("\n");
	}

	for (int j = 0; j < 2; j++)
	{
		printf("姓名：%s\n", stu[j].name);
		printf("年龄：%d\n", stu[j].age);
		printf("《计算机》分数：%5.2lf\n", stu[j].score[0]);
		printf("《数据结构》分数：%5.2lf\n", stu[j].score[1]);
		printf("性别：%s\n", stu[j].sex == 'M' ? "男" : "女");
		printf("\n");
	}


	return 0;
}
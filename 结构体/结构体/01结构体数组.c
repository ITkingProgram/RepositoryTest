#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>

struct student
{
	char name[21];
	int age;
	double score[2];
	char sex;
};

int main01()
{
	/*struct student stu[3] = {
		{"king",18,100,100,'M'},
		{"Ming",18,90,90,'M'},
		{"A",18,34,90,'F'},
	};*/

	struct student stu[3];
	for (int j = 0; j < 3; j++)
	{
		int n = j + 1;
		/*int n = j + 1;
		printf("请输入第%d名同学的名字：", n);
		scanf("%s", stu[j].name);
		printf("请输入第%d名同学的年龄：", n);
		scanf("%d", &stu[j].age);
		printf("请输入第%d名同学《C语言》的成绩：", n);
		scanf("%5.2lf", &stu[j].score[0]);
		printf("请输入第%d名同学《数据结构》的成绩：", n);
		scanf("%5.2lf", &stu[j].score[1]);
		printf("请输入第%d名同学的性别：", n);
		scanf(",%c", &stu[j].sex);
			printf("\n");*/

		printf("请输入第%d名同学的名字，年龄，《C语言》成绩，《数据结构》成绩，性别",n);
		scanf("%s%d%5.2lf%5.2lf,%c", stu[j].name, &stu[j].age, &stu[j].score[0], &stu[j].score[1], &stu[j].sex);
		printf("\n");
	}

	//struct student stu= { "king",18,100,100,'M' };
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n", stu[i].name);
		printf("年龄：%d\n", stu[i].age);
		printf("《计算机》分数：%5.2lf\n", stu[i].score[0]);
		printf("《数据结构》分数：%5.2lf\n", stu[i].score[1]);
		printf("性别：%s\n", stu[i].sex == 'M' ? "男" : "女");
		printf("\n");
	}
	
	return 0;
}
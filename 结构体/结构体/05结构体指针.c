#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

struct source
{
	double English;
	double Chinese;
	double Math;
};

struct student
{
	char name[21];
	int age;
	struct source goal ;
	char sex;
};

int main05()
{
	struct student stu = { "孙权",18,80,90.5,95.5,'M' };
	struct student* p = &stu;
	printf("姓名：%s\n年龄：%d\n外语：%5.2lf\n文学：%5.2lf\n数学：%5.2lf\n性别：%s\n",
		(*p).name, (*p).age,
		(*p).goal.English, (*p).goal.Chinese, (*p).goal.Math, 
		(*p).sex == 'M' ? "男" : "女");


	return 0;
}
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
	struct student stu = { "��Ȩ",18,80,90.5,95.5,'M' };
	struct student* p = &stu;
	printf("������%s\n���䣺%d\n���%5.2lf\n��ѧ��%5.2lf\n��ѧ��%5.2lf\n�Ա�%s\n",
		(*p).name, (*p).age,
		(*p).goal.English, (*p).goal.Chinese, (*p).goal.Math, 
		(*p).sex == 'M' ? "��" : "Ů");


	return 0;
}
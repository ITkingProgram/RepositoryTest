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
		{"��Ȩ",18,95.5,'M'},
		{"������",17,93.5,'F'},
		{"���",16,96.5,'M'}
	};
	struct student* p = stu;
	printf("������        \t���䣺\t������\t�Ա�\n");
	printf("\n");

	//���ɼ�����
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

	//�����Ϣ
	for (p=stu; p<(stu+N); p++)
	{
		printf("%-11s\t%d\t%5.1f\t%s\t",
			p->name, (*p).age, p->source, p->sex == 'M' ? "��" : "Ů");
		printf("\n");
	}
	return 0;
}
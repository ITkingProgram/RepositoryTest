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
		printf("�������%d��ͬѧ�����֣�", n);
		scanf("%s", stu[i].name);
		printf("�������%d��ͬѧ�����䣺", n);
		scanf("%d", &stu[i].age);
		printf("�������%d��ͬѧ��C���ԡ��ĳɼ���", n);
		scanf("%lf", &stu[i].score[0]);//scanf�ǲ��ܼ�%5.2f�ģ�����
		printf("�������%d��ͬѧ�����ݽṹ���ĳɼ���", n);
		scanf("%lf", &stu[i].score[1]);
		printf("�������%d��ͬѧ���Ա�", n);
		getchar();
		scanf("%c", &stu[i].sex);
		printf("\n");
	}

	for (int j = 0; j < 2; j++)
	{
		printf("������%s\n", stu[j].name);
		printf("���䣺%d\n", stu[j].age);
		printf("���������������%5.2lf\n", stu[j].score[0]);
		printf("�����ݽṹ��������%5.2lf\n", stu[j].score[1]);
		printf("�Ա�%s\n", stu[j].sex == 'M' ? "��" : "Ů");
		printf("\n");
	}


	return 0;
}
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
		printf("�������%d��ͬѧ�����֣�", n);
		scanf("%s", stu[j].name);
		printf("�������%d��ͬѧ�����䣺", n);
		scanf("%d", &stu[j].age);
		printf("�������%d��ͬѧ��C���ԡ��ĳɼ���", n);
		scanf("%5.2lf", &stu[j].score[0]);
		printf("�������%d��ͬѧ�����ݽṹ���ĳɼ���", n);
		scanf("%5.2lf", &stu[j].score[1]);
		printf("�������%d��ͬѧ���Ա�", n);
		scanf(",%c", &stu[j].sex);
			printf("\n");*/

		printf("�������%d��ͬѧ�����֣����䣬��C���ԡ��ɼ��������ݽṹ���ɼ����Ա�",n);
		scanf("%s%d%5.2lf%5.2lf,%c", stu[j].name, &stu[j].age, &stu[j].score[0], &stu[j].score[1], &stu[j].sex);
		printf("\n");
	}

	//struct student stu= { "king",18,100,100,'M' };
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n", stu[i].name);
		printf("���䣺%d\n", stu[i].age);
		printf("���������������%5.2lf\n", stu[i].score[0]);
		printf("�����ݽṹ��������%5.2lf\n", stu[i].score[1]);
		printf("�Ա�%s\n", stu[i].sex == 'M' ? "��" : "Ů");
		printf("\n");
	}
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

enum hero
{
	run, attack, skill,
	dance = 10, showtime,
	dath = 20, moti = 30
};

int main()
{
	//enum hero king;
	int num = 30;
	while (1)
	{
		scanf("%d", &num);
		switch (num)
		{
		case run:
			printf("Ӣ��λ�ơ���\n");
			break;
		case attack:
			printf("Ӣ�۹�������\n");
			break;
		case skill:
			printf("Ӣ�ۼ��ܡ���\n");
			break;
		case dance:
			printf("Ӣ��չʾ����\n");
			break;
		case showtime:
			printf("Ӣ�۾��ѡ���\n");
			break;
		case dath:
			printf("Ӣ����������\n");
			return 0;
			break;
		case moti:
			printf("Ӣ�۾�ֹ����\n");
			break;
		default:
			printf("����ָ�\n");
			break;
		}
	}


	return 0;
}
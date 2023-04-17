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
			printf("Ó¢ĞÛÎ»ÒÆ¡ª¡ª\n");
			break;
		case attack:
			printf("Ó¢ĞÛ¹¥»÷¡ª¡ª\n");
			break;
		case skill:
			printf("Ó¢ĞÛ¼¼ÄÜ¡ª¡ª\n");
			break;
		case dance:
			printf("Ó¢ĞÛÕ¹Ê¾¡ª¡ª\n");
			break;
		case showtime:
			printf("Ó¢ĞÛ¾õĞÑ¡ª¡ª\n");
			break;
		case dath:
			printf("Ó¢ĞÛÕóÍö¡ª¡ª\n");
			return 0;
			break;
		case moti:
			printf("Ó¢ĞÛ¾²Ö¹¡ª¡ª\n");
			break;
		default:
			printf("´íÎóÖ¸Áî£¡\n");
			break;
		}
	}


	return 0;
}
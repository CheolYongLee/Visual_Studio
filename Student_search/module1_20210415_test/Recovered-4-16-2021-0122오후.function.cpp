#pragma warning(disable:4996)
#include <stdio.h>
#include "struct.h""
#define total_student 27

void SEARCH(student s[total_student])
{
	char name[50];
	char gender[50];
	int birthday;
	char num[50];
	char inc[50];
	while (1)
	{
		int search_num;
		printf("========================\n");
		printf("1 : �̸�\n");
		printf("2 : ����\n");
		printf("3 : ����\n");
		printf("4 : �޴�����ȣ\n");
		printf("5 : ��Ī���\n");
		printf("========================\n");
		printf("1~5 �����ϼ��� : \n");
		scanf("%d", &search_num);
		switch (search_num)
		{
		case 1:	
			printf("�˻��� �̸� : ");
			scanf("%s", name);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].name == name)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 2:
			printf("�˻��� ���� : ");
			scanf("%s", gender);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].gender[i] == gender)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 3:
			printf("�˻��� ���� : ");
			scanf("%d", &birthday);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].birthday[i] == birthday)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 4:
			printf("�˻��� �޴��� ��ȣ : ");
			scanf("%d", num);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].num[i] == num)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 5:
			printf("�˻��� ��Ī��� : ");
			scanf("%d", inc);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].inc[i] == inc)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		}
	}
}
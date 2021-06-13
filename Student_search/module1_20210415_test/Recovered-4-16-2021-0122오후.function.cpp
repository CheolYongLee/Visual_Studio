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
		printf("1 : 이름\n");
		printf("2 : 성별\n");
		printf("3 : 생일\n");
		printf("4 : 휴대폰번호\n");
		printf("5 : 매칭기업\n");
		printf("========================\n");
		printf("1~5 선택하세요 : \n");
		scanf("%d", &search_num);
		switch (search_num)
		{
		case 1:	
			printf("검색할 이름 : ");
			scanf("%s", name);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].name == name)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 2:
			printf("검색할 성별 : ");
			scanf("%s", gender);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].gender[i] == gender)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 3:
			printf("검색할 생일 : ");
			scanf("%d", &birthday);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].birthday[i] == birthday)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 4:
			printf("검색할 휴대폰 번호 : ");
			scanf("%d", num);
			for (int i = 0; i <= total_student; i++)
			{
				if (s[i].num[i] == num)
					printf("%s %s %d %s %s", s[i].name, s[i].gender, s[i].birthday, s[i].num, s[i].inc);
			}
			break;
		case 5:
			printf("검색할 매칭기업 : ");
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
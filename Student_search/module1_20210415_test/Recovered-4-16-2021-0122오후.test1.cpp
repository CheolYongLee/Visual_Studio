#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#define total_student 27
//#include <struct.h>


int main(void)
{
	FILE *ifp;
	FILE *ofp;

	char name[50];
	char gender[50];
	int birth;
	char phone[50];
	char inc[50];
	int res;

	ifp = fopen("profile.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못헸습니다.\n");
		return 1;
	}

	ofp = fopen("succes.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못헸습니다.\n"); 
		return 1;
	}
	/*
	while (1)
	{
		res = fscanf(ifp, "%s%s%d%s%s", name, gender, &birth, phone, inc);
		if (res == EOF)
		{
			break;
		}
		fprintf(ofp, "%s%5s%5d%5s%5s\n", name, gender, birth, phone, inc);
	}
	*/
	
	struct student s[total_student];

	for (int i = 0; i <= total_student; i++)
	{

	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}
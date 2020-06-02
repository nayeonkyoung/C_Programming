// 문자열 정렬(배열) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char book[10][10];
	int i, j, n;
	char  tmp[10];
	n = sizeof(book) / sizeof(char[10]);

	printf("정리할 %d권의 책을 입력하세요.\n", n);

	for (i = 0; i < n; i++)
	{
		printf(" %d번째 책을 입력 해주세요 : ", i + 1);
		fgets(book[i], sizeof(char[10]), stdin);
		book[i][strlen(book[i]) - 1] = 0;
	}

	puts(" \n입력하신 책들을 확인해 주세요!");
	for (i = 0; i < n; i++)
	{
		printf(" %d번 째 책 이름 ==> %s \n", i + 1, book[i]);
	}


	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(book[j], book[j + 1]) > 0)
			{
				strcpy(tmp, book[j]);
				strcpy(book[j], book[j + 1]);
				strcpy(book[j + 1], tmp);
			}
		}
	}

	puts(" \n이제 오름차순으로 정리합니다!");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]번 째 책 이름 ==> %s \n", i + 1, book[i]);
	}

	return 0;
}
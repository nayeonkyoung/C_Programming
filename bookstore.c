// ���ڿ� ����(�迭) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char book[10][10];
	int i, j, n;
	char  tmp[10];
	n = sizeof(book) / sizeof(char[10]);

	printf("������ %d���� å�� �Է��ϼ���.\n", n);

	for (i = 0; i < n; i++)
	{
		printf(" %d��° å�� �Է� ���ּ��� : ", i + 1);
		fgets(book[i], sizeof(char[10]), stdin);
		book[i][strlen(book[i]) - 1] = 0;
	}

	puts(" \n�Է��Ͻ� å���� Ȯ���� �ּ���!");
	for (i = 0; i < n; i++)
	{
		printf(" %d�� ° å �̸� ==> %s \n", i + 1, book[i]);
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

	puts(" \n���� ������������ �����մϴ�!");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]�� ° å �̸� ==> %s \n", i + 1, book[i]);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, j;
	char puzzle[20][10];
	FILE* fp;
	fp = fopen("PersonInfo.txt", "r+");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			fscanf(fp, "%s", &puzzle[i][j]);
			printf("%s ", puzzle[i][j]);
		}
		puts("");
	}
	fclose(fp);
}
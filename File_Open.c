#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL) {
		printf("���� ���� ����\n");
	}
	else {
		printf("���� ���� ����\n");
	}
	fclose(fp);

	if (remove("sample.txt") == -1) {
		printf("sample.txt�� ������ �� �����ϴ�.\n");
	}
	else {
		printf("smaple.txt�� �����Ͽ����ϴ�.\n");
	}


	return 0;
}
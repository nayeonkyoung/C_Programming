#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
	}
	else {
		printf("파일 열기 성공\n");
	}
	fclose(fp);

	if (remove("sample.txt") == -1) {
		printf("sample.txt를 삭제할 수 없습니다.\n");
	}
	else {
		printf("smaple.txt를 삭제하였습니다.\n");
	}


	return 0;
}
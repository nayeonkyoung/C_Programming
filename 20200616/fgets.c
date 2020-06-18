#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;
	char line[100];
	fp = fopen("sample.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	while (fgets(line, 100, fp) != NULL) {
		fputs(line, stdout);
	}
	fclose(fp);

	return 0;
}
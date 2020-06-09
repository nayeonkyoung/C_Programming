#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp1, *fp2;
    char file1[100];
    char file2[100];
    char buffer[1024];
    int count;

    printf("첫번째 파일 이름 ; ");
    scanf_s("%s", file1, 100);

    printf("두번째 파일 이름 ; ");
    scanf_s("%s", file2, 100);

    if ((fp1 = fopen(file1, "rb")) == NULL) {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }

    if ((fp2 = fopen(file2, "ab")) == NULL) {
        fprintf(stderr, "추가을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }

    while ((count = fread(buffer, sizeof(char), 1024, fp1)) > 0) {
        fwrite(buffer, sizeof(char), count, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp;

    int number = 20;
    double grade = 4.5;
    char name[100] = "나연경";

    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    fprintf(fp, "%s\n", name);
    fprintf(fp, "%d\n", number);
    fprintf(fp, "%lf\n", grade);

    fclose(fp);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    FILE* fp;

    int number;
    double grade;
    char name[100];

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    fscanf(fp, "%s", name);
    fscanf(fp, "%d", &number);
    fscanf(fp, "%lf", &grade);

    fprintf(stdout, "%s \n", name);
    fprintf(stdout, "%d \n", number);
    fprintf(stdout, "%lf \n", grade);

    fclose(fp);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp1, *fp2;
    char file1[100];
    char file2[100];
    char buffer[1024];
    int count;

    printf("ù��° ���� �̸� ; ");
    scanf_s("%s", file1, 100);

    printf("�ι�° ���� �̸� ; ");
    scanf_s("%s", file2, 100);

    if ((fp1 = fopen(file1, "rb")) == NULL) {
        fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.");
        exit(1);
    }

    if ((fp2 = fopen(file2, "ab")) == NULL) {
        fprintf(stderr, "�߰��� ���� ������ �� �� �����ϴ�.\n");
        exit(1);
    }

    while ((count = fread(buffer, sizeof(char), 1024, fp1)) > 0) {
        fwrite(buffer, sizeof(char), count, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
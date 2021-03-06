#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

void init_table(int table[], int size);

int main() {
    int table[SIZE];
    int n, data;
    long pos;
    FILE* fp = NULL;

    init_table(table, SIZE);

    if ((fp = fopen("sapmle.dat", "wb")) == NULL) {
        fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }

    fwrite(table, sizeof(int), SIZE, fp);
    fclose(fp);

    if ((fp = fopen("sample.dat", "rb")) == NULL) {
        fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }

    while (1) {
        printf("파일에서의 위치르르 입력하십시오(0에서 %d, 종료 -1):", SIZE - 1);
        scanf_s("%d", &n);
        if (n == -1) break;
        pos = (long)n * sizeof(int);
        fseek(fp, pos, SEEK_SET);
        fread(&data, sizeof(int), 1, fp);
        printf("%d의 위치의 값은 %d입니다.\n", n, data);
    }

    fclose(fp);
    return 0;
}

void init_table(int table[], int size) {
    for (int i = 0; i < size; i++) {
        table[i] = i * i;
    }
}
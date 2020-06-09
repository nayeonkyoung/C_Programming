#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp;
    char fname[100];
    int number, count = 0;
    char name[20];
    float score, total = 0.0;
    printf("���� ���� �̸��� �Է��Ͻÿ�: ");
    scanf_s("%s", fname, 99);

    if ((fp = fopen(fname, "w")) == NULL) {
        fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.", fname);
        exit(1);
    }

    while (1) {
        printf("����, �̸�, ������ �Է��Ͻÿ�:(�����̸� ����)");
        scanf_s("%d", &number);
        if (number < 0) break;
        scanf("%s %f", name, &score);
        fprintf(fp, "%d %s %f\n", number, name, score);
    }
    fclose(fp);

    if ((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.", fname);
        exit(1);
    }

    while (!feof(fp)) {
        fscanf(fp, "%d %s %f", &number, name, &score);
        total += score;
        count++;
    }

    printf("��� = %f\n", total / count);
    fclose(fp);

    return 0;
}
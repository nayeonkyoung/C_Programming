//1. ������ �Ż�����(�б�, �а�, �й�, �̸�, ����)�� ���������Ҵ�� �޸𸮿� ������ �� ȭ�鿡 ����Ͻÿ�.
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
typedef struct {
    char develop[MAX_LEN];
    char companyNm[MAX_LEN];
    char name[MAX_LEN];
}Student;

void View(Student* std, int n);
void Nameup(Student* std, int n);

int main() {
    Student* std;
    int n = 0;
    int i = 0;

    printf("�л� �� : ");
    scanf_s("%d", &n);
    printf("================================\n");

    std = (Student*)malloc(sizeof(Student) * n);
    printf("�л� ���� �Է�\n");

    for (i = 0; i < n; i++)
    {
        printf("%d��° �л� ���� : �а� �й� �̸�\n", i + 1);
        scanf_s("%s %s %s", std[i].develop, MAX_LEN, &std[i].companyNm, MAX_LEN, &std[i].name, MAX_LEN);
    }
    View(std, n);

    printf("�̸� ������ ���� ��~~~~~~\n");
    Nameup(std, n);
    View(std, n);
}
void View(Student* std, int n)
{
    int i = 0;
    printf("================================\n");
    printf("%s   %s   %s\n", "�а���", "�й�", "�̸�");
    printf("================================\n");
    for (i = 0; i < n; i++)
    {
        printf("%s %s %s\n",
            std[i].develop, std[i].companyNm, std[i].name);
    }
}

void Nameup(Student* std, int n) {
    Student temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(std[i].name, std[j].name) == -1) {
                temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }
}

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100

typedef struct _Member {
    char name[MAX_LEN];
    char companyNm[MAX_LEN];
    char birth[MAX_LEN];
    char team[MAX_LEN];
    char phone[MAX_LEN];
}Member;
void companyNmup(Member* t) {
    Member temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(t[i].companyNm, t[j].companyNm) == -1) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
void birthup(Member* t) {
    Member temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(t[i].birth, t[j].birth) == -1) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
void teamup(Member* t) {
    Member temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(t[i].team, t[j].team) == -1) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
void phoneup(Member* t) {
    Member temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(t[i].phone, t[j].phone) == -1) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
void Nameup(Member* t) {
    Member temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(t[i].name, t[j].name) == -1) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}


int main() {
    FILE* fp;
    int choice;

    if ((fopen_s(&fp, "PersonInfo.txt", "r")) != 0) {
        printf("���� ���� ��\n");
        exit(1);
    }
    Member *t;
    t = (Member*)malloc(sizeof(Member) * 10);
    int index = 0;
    while (1) {
        fscanf_s(fp, "%s %s %s %s %s", t[index].name, MAX_LEN, t[index].companyNm, MAX_LEN, t[index].birth, MAX_LEN, t[index].team, MAX_LEN, t[index].phone, MAX_LEN);
        if (feof(fp))break;
        printf("%s %s %s %s %s\n", t[index].name, t[index].companyNm, t[index].birth, t[index].team, t[index].phone);
        index++;

    }
    printf("������ ����ϴ� Ű���带 ������ �ּ���!\n");
    printf("(1. �̸�   2. ���   3. �������   4. �μ���   5. ��ȭ��ȣ)\n");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        Nameup(t);
        for (int i = 0; i < 10; i++) {
            printf("%s %s %s %s %s\n", t[i].name, t[i].companyNm, t[i].birth, t[i].team, t[i].phone);
        }
        break;
    case 3:
        birthup(t);
        for (int i = 0; i < 10; i++) {
            printf("%s %s %s %s %s\n", t[i].name, t[i].companyNm, t[i].birth, t[i].team, t[i].phone);
        }
        break;
    case 4:
        teamup(t);
        for (int i = 0; i < 10; i++) {
            printf("%s %s %s %s %s\n", t[i].name, t[i].companyNm, t[i].birth, t[i].team, t[i].phone);
        }
        break;
    case 5:
        phoneup(t);
        for (int i = 0; i < 10; i++) {
            printf("%s %s %s %s %s\n", t[i].name, t[i].companyNm, t[i].birth, t[i].team, t[i].phone);
        }
        break;
    case 2:
        companyNmup(t);
        for (int i = 0; i < 10; i++) {
            printf("%s %s %s %s %s\n", t[i].name, t[i].companyNm, t[i].birth, t[i].team, t[i].phone);
        }
        break;

    }
    fclose(fp);
    return 0;
}


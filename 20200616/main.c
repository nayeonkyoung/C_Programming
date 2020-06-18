#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
void Nameup(Member *t);
typedef struct {
    char name[MAX_LEN];
    char companyNm[MAX_LEN];
    char birth[MAX_LEN];
    char team[MAX_LEN];
    char phone[MAX_LEN];
}Member;
int main() {
    Member m;
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

        printf("������ ����ϴ� Ű���带 ������ �ּ���!\n");
        printf("(1. �̸�   2. ���   3. �������   4. �μ���   5. ��ȭ��ȣ");
        scanf_s("%d", &choice);


        switch (choice) {
        case 1:
            Nameline(t);

            if (feof(fp))break;
            printf("%s %s %s %s %s\n", t[index].name, t[index].companyNm, t[index].birth, t[index].team, t[index].phone);
        }
    }

    fclose(fp);
    return 0;

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
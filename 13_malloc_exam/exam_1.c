//1. 본인의 신상정보(학교, 학과, 학번, 이름, 나이)를 동적으로할당된 메모리에 저장한 후 화면에 출력하시오.
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
typedef struct {
    char college[MAX_LEN];
    char develop[MAX_LEN];
    char companyNm[MAX_LEN];
    char name[MAX_LEN];
    int year;
}Student;

void View(Student* std, int n);

int main() {
    Student* std;
    int n = 0;
    int i = 0;

    printf("학생 수 : ");
    scanf_s("%d", &n);
    printf("================================\n");

    std = (Student*)malloc(sizeof(Student) * n);
    printf("학생 정보 입력\n");

    for (i = 0; i < n; i++)
    {
        printf("%d번째 학생 정보 : 학교 학과 학번 이름 나이\n", i + 1);
        scanf_s("%s %s %s %s %d", &std[i].college, MAX_LEN, std[i].develop, MAX_LEN, &std[i].companyNm, MAX_LEN, &std[i].name, MAX_LEN, &std[i].year );
    }
    View(std, n);
    
}
void View(Student* std, int n)
{
    int i = 0;
    printf("================================\n");
    printf("%s   %s   %s   %s   %s\n", "학교", "학과", "학번", "이름", "나이");
    printf("================================\n");
    for (i = 0; i < n; i++)
    {
        printf("%s %s %s %s %d\n",
            std[i].college, std[i].develop, std[i].companyNm, std[i].name, std[i].year);
    }
}

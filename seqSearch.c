#include <stdio.h>
#define SIZE 6

int seq_search(int list[], int n, int key);

int main() {
    int key;
    int grade[SIZE] = { 10,20,30,40,50,60 };

    printf("탐색할 값을 입력하시오 : ");
    scanf_s("%d", &key);
    printf("탐색 결과 = %d\n", seq_search(grade, SIZE, key));

    return 0;
}
int seq_search(int list[], int n, int key) {

    for (int i = 0; i < SIZE; i++) {
        if (list[i] == key) return i;
    }

    return -1;
}
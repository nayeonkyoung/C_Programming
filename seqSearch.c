#include <stdio.h>
#define SIZE 6

int seq_search(int list[], int n, int key);

int main() {
    int key;
    int grade[SIZE] = { 10,20,30,40,50,60 };

    printf("Ž���� ���� �Է��Ͻÿ� : ");
    scanf_s("%d", &key);
    printf("Ž�� ��� = %d\n", seq_search(grade, SIZE, key));

    return 0;
}
int seq_search(int list[], int n, int key) {

    for (int i = 0; i < SIZE; i++) {
        if (list[i] == key) return i;
    }

    return -1;
}
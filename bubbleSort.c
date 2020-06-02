#include <stdio.h>
#define SIZE 10

void print_list(int list[], int n);
void bubble_sort(int list[], int n);

int main() {
    int grade[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

    printf("원래의 배열\n");
    print_list(grade, SIZE);

    bubble_sort(grade, SIZE);

    printf("정렬된 배열\n");
    print_list(grade, SIZE);

    return 0;
}

void print_list(int list[], int n) {
    int i = 0;
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}


void bubble_sort(int list[], int n) {
	int i, scan, temp;
	for (scan = 0; scan < n - 1; scan++) {
		for (i = 0; i < n - 1; i++) {
			if (list[i] > list[i + 1]) {
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		}
	}
}
#include <stdio.h>
#define SIZE 6

int binary_search(int list[], int n, int key);

int main() {
	int key;
	int grade[SIZE] = { 10,20,30,40,50,60 };

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &key);
	printf("Ž�� ��� = %d\n", binary_search(grade, SIZE, key));

	return 0;
}
int binary_search(int list[], int n, int key) {
	int low, high, middle;

	low = 0;
	high = n - 1;

	while (low <= high) {
		middle = (low + high) / 2;
		if (key == list[middle]) {
			return middle;
		}
		else if (key > list[middle]) {
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}
	}
	return -1;
}
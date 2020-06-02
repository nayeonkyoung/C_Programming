#include<stdio.h>
int main() {
	int target, low, high, mid;
	int data[16] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};

	scanf("%d", &target);
	low = 0;
	high = 9;

	while (1) {
		if (low <= high) {
			mid = (low + high) / 2;

			if (target == data[mid]) {
				printf("%d는 %d번째 index에 있습니다.", target, mid);
				break;
			}

			if (target <= data[mid]) {
				high = mid;
			}
			else {
				low = mid;
			}
		}
		else {
			printf("%d는 존재하지 않습니다.", target);
			break;
		}
	}
}
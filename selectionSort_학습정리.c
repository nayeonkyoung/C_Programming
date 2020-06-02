# include <stdio.h>
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

void selection_sort(int list[], int n) {
    int i, j, least, temp;

    for (i = 0; i < n - 1; i++) {
        least = i;

        for (j = i + 1; j < n; j++) {
            if (list[j] < list[least])
                least = j;
        }

        if (i != least) {
            SWAP(list[i], list[least], temp);
        }
    }
}

void main() {
    int i;
    int n = 6;
    int list[6] = { 5,3,8,1,2,7 };

    // 선택 정렬 수행
    selection_sort(list, n);

    // 정렬 결과 출력
    for (i = 0; i < n; i++) {
        printf("%d\n", list[i]);
    }
}
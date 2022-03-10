//선택 정렬
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

void sort(int* arr, int size);

int main() {
	int* arr = NULL;
	int n, i;

	printf("Input size of array>> ");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		arr[i] = rand() % 1000;
		printf("%d ", arr[i]);
	}
	sort(arr, n);
	printf("\nSorted array\n ");

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

void sort(int arr[], int size) {
	int i, j, min, temp;
	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++)
			if (arr[min] > arr[j])
				min = j;
		SWAP(arr[i], arr[min], temp);
	}
}

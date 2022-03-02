#include<stdio.h>
#include<math.h>

void Truth(int* list, int n, int size);
void print(int* list, int size);

int main() {
	int n, * list;
	printf("Input number of numbers: ");
	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);//동적

	for (int i = 0; i < n; i++)
		list[i] = 0;

	printf("total: %.0f\n", pow(2.0, (double)n));  //모두 2^n 가능성이 존재
	Truth(list, n, n);  //함수 호출
	return 0;
}

//从后往前
void Truth(int* list, int n, int size) { //list값이 설정하는 함수; 같은list 중 1, 2 보관
	if (n == 0)
		print(list, size);
	else {
		Truth(list, n - 1, size);
		list[n - 1] = 1;
		Truth(list, n - 1, size);
		list[n - 1] = 0;
	}
}

void print(int* list, int size) {  //1이면 'true', 2이면 'false'
	printf("<");
	for (int i = size - 1; i >= 0; i--) {
		if (list[i] == 1)
			printf("true ");
		else
			printf("false ");
	}
	printf(">\n");
}

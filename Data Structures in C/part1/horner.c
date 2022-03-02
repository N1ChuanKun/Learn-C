#include<stdio.h>

long int horner(int arr[], int n, int x0) {
  //循环法
  //arr是用于存放多项式系数的数组，n是数组大小，x0是x0
  //arr[0]存放a0，arr[1]存放a1
	long int result = arr[n - 1];
	for (int i = 1; i <= n - 1; i++)
		result = result * x0 + arr[n - 1 - i];
	return result;
}

/*递归法
long int horner(int arr[], int n, int x0) {
	int result = 0;
	if (n <= 1)
		return arr[0];
	return arr[0] + horner(arr + 1, n - 1, x0) * x0;
}
*/

int main() {
	long int result;
	int a[4] = { 5,4,2,1 };
	result = horner(a, 4, 1);
	printf("polynomial x^5 + x^4 + 2x^2 + 3 = %ld\n", result);
}

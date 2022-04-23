#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SWAP(x,y,t) {(x)=(y),(t)=(y),(x)=(t);}
#define MAX_SIZE 101

void sort(int [], int);

int main(){
    int i, n;
    int a[100];

    printf("size of arr>> ");
    scanf("%d", &n);

    if( (n<0) || (n>100) ){
        printf("Input error!\n");
        return 0;
    }

    for(i=0;i<n;i++){
        a[i] = rand() % 1000;
        printf("%d ", a[i]);
    }
    printf("\n");

    sort(a,n);

    printf("Sorted array: \n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}

void sort(int list[], int n)
{
	int i, j, min, temp;
	for(i=0; i< n-1; i++) {
		min = i;

		for(j=i+1; j<n; j++) {
			if(list[j] < list[min])
				min = j;
		}

		SWAP(list[i], list[min], temp);
	}
}
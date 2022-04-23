#include <stdio.h>

#define MAX_SIZE 100
float printf1_float(float *, int);
float sum(float [], int);
float input[MAX_SIZE], answer;

void main(){
    int i;
    for(i=0; i<MAX_SIZE; i++)
        input[i] = i;
    answer = sum(input, MAX_SIZE);
    printf("The sum of array: %f\n", answer);
    printf1_float(input, MAX_SIZE);
}

float sum(float input[], int size){
/* float input[] -> input数列的起始位置 */
    float answer = 0;
    for(int i=0; i<size; i++)
        answer += input[i];
    return answer;
}

float printf1_float(float *ptr, int row){
/* 输出数列的值 和 数列的地址 */
    int i;
    printf("Address Contents\n");

    for(i=0; i<row; i++)
        printf("%p %10.10f\n", ptr + i, *(ptr+i));
/* ptr */

    printf("\n");
}

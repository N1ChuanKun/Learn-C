#include "array_common.h"

void print1(int *ptr, int rows){
    int i;

    for(i=0; i<rows; i++)
        printf("%d ", *(ptr+i));
    printf("\n");
}

void printf1_float(int *ptr, int rows){
    int i;

    for(i=0; i<rows; i++)
        printf("%p %10.10f \n", ptr + i, *(ptr+i));
    printf("\n");
}

int** make2Array(int rows, int cols){
    int i, **x;                            
    /* 利用指针数组，动态生成二维数组
    首先生成行(8 bytes)，每个行指针指向一个新的列指针 */

    MALLOC(x, rows * sizeof(*x));
    for(i=0; i<cols; i++)
        MALLOC(x[i], cols * sizeof(**x));
}
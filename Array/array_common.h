#include <stdio.h>
#include <stdlib.h>
/* 动态分配数列的大小 */


/* p是数列名称，s是需要的内存空间
   例如：int list[]; 输入一个n;
   MALLOC( list, n * sizeof(int) )    */
#define MALLOC(p,s) \
	if ( !( (p) = malloc(s) ) ) { \
		fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
	}

#define REALLOC(p,s) \
    if( !( (p) = realloc(s) ) ){ \
        printf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE); \
    }

#define CALLOC(p,s) \
    if( !( (p) = calloc(s) ) ){ \
        printf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE); \
    }

#define FALSE 0
#define TRUE 1

void print1(int *, int);
void printf1_float(int *, int);
int** make2Array(int, int);
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define COMPARE(x,y) ( ((x) < (y)) ? -1: (((x) == (y))? 0: 1) )

/* 二分查找 递归法 */
int binsearch_recur(int list[], int numsearch, int left, int right)
{
    int middle;

    while(left<=right){
        middle = (right+left)/2;

        switch(COMPARE(list[middle], int numsearch)){
            case -1:
                return binsearch_recur(list, numsearch, middle+1, right);
            case 1:
                return binsearch_recur(list, numsearch, left, middle-1);
            case 0:
                return middle;
        }
    }
    return 0;
}
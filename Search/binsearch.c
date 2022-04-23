#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define COMPARE(x,y) ( ((x) < (y)) ? -1: (((x) == (y))? 0: 1) )

/* 二分查找 青春版 */
int binsearch(int list[], int numsearch, int left, int right)
{
    int middle;

    while(left<=right)
    {
        middle = (left + right) / 2;

        switch(COMPARE(list[middle], numsearch))
        {
            case -1:
                left = middle + 1;
                break;
            case 1:
                right = middle - 1;
                break;
            case 0:
                return middle;
        }
    }

    return 0;
}
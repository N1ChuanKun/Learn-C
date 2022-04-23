#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST 26
#define SWAP(x,y,t) {(t)=(x), (x)=(y), (y)=(t);}

/* 利用递归函数，输出所有可能性。从最后两位开始变换，并且输出后还原顺序 */

void perm(char *list, int i, int n)
{
    int j;
    char temp;

    if(i == n){
        for(j = 0; j<=n ;j++)
            printf("%c", list[j]);
        printf("\n");
    }
    else{    
        for(j=i; j<=n; j++){
            SWAP(list[i], list[j], temp);
            perm(list, i+1, n);
            SWAP(list[i], list[j], temp);
        }
    }
    return 0;
}


int main()
{
    int n;
    char list[MAX_LIST];

    printf("Enter the numebr of list: ");
    scanf("%d", &n);

    if(n<1 || n>MAX_LIST){
        return -1;
    } 

    for(int i=0; i<n; i++){
        list[i] = 'a'+(char)i;
    }

    perm(list, 0, n-1);

    return 0;
}
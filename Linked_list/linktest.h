#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _listNode *listPointer;     /* 创建一个_listNode型的指针 */
typedef struct _listNode{                  /* 指针包括数据和名为link的listPointer指针 */
    char data[4];
    listPointer link;
}listNode;

#define IS_EMPTY(first) (!(first))

listPointer first = NULL;                  /* 创建新的list */

first = (listPointer) malloc(sizeof(listNode));
strpy(first->data, "bat");
first->link = NULL;
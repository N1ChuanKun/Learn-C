#include "linktest.h"

void insertAfter(listPointer *first, listPointer prev, const char *_data){
    listPointer node;
    node = (listPointer) malloc(sizeof(listNode));
    if ( node == NULL ){
        fprintf(stderr, "The memory is full\n");
        exit(1);
    }
    strcpy(node->data, _data);

    if(IS_EMPTY(first)){         /* 空list */
        node->link = NULL;
        *first = node;
    }else{                       /* node链接原来prev连接的位置，prev接在node前面 */
        node->link = prev->link;
        prev->link = node;
    }
}

void deleteAfter(listPointer *first, listPointer prev, listPointer node){
    if(prev)                                  /* 若prev非空 */
        prev->link = node->link;              /* 架空node */
    else
        *first = (*first)->link;
    free(node);
}

void printList(listPointer ptr){
    printf("The list contains: \n");
    for( ; ptr; ptr = ptr->link)              /* 在ptr不等于NULL之前一直循环 */
        printf("%s\n", ptr->data);
}

listPointer searchNodeFrom(listPointer ptr, const char *_data){
    for( ; ptr; ptr = ptr->link){
        if(strcmp(ptr->data, _data) == 0)     /* 比中就返回ptr */
            return ptr;
    }
    printf("There is no node in the list\n");
    return NULL;
}

listPointer invert(listPointer lead){        /* 火车模型，让list倒转 */
    listPointer middle, trail;
    middle = NULL;

    while(lead){
        trail = middle;
        middle = lead;
        lead = lead->link;
        middle->link = trail;
    }
    return middle;
}

listPointer concatenate(listPointer ptr1, listPointer ptr2){
    listPointer temp;
    if(!ptr1) return ptr2;
    if(!ptr2) return ptr1;

    for( temp=ptr1; temp->link; temp=temp->link);    /* temp指向ptr1最后一个位置 */
    temp->link = ptr2;

    return ptr1;
}
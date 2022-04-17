#include "stackR2.h"

int __capacity;
int __top;

void creatStack(stack *_stack, int defaultSize){
    if(defaultSize > 0){
        MALLOC( *_stack, defaultSize * sizeof(element));
    }else{
        *_stack = NULL;
    }

    __capacity = defaultSize;
    __top == -1;
}

bool isEmpty(){
    return (__top < 0);
}

bool isFull(){
    return(__top >= __capacity - 1);
}

void stackFull(stack *_stack){
    REALLOC( *_stack, 2 * __capacity * sizeof(element));
    __capacity *= 2;
    printf("Stack is reallocated with capacity %d\n", __capacity);
}

void pushStack(stack *_stack, element item){
    if(isFull(*_stack)){
        stackFull(_stack);
    }
    printf("%d %d\n", __top, __capacity);
    (*_stack)[++__top].key = item.key;
    (*_stack)[__top].value = item.valude;
    printf("PUSH:\t\t(%d, %c)\n", (*_stack)[__top].key, (*_stack)[__top].value);
}

void popStack(stack _stack, element* item){
    if(!(isEmpty(_stack))){
        item->key = _stack[__top].key;
        item->value = _stack[__top--].value;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef stack _element{
    int key;
    char value;
} element;
typedef element* stack;

extern int __capacity;
extern int __top;
/**/

#define top(stack)    __top
#define sz(stack)     __capacity
/*只能有一个stack*/

/*当stack值需要修改的时候，使用stack *_stack!!!*/
void createStack(stack *_stack, int defaultSize);
bool isEmpty();
bool isFull();
void stackFull(stack *_stack);
void pushStack(stack *_stack, element item);
void popStack(stack _stack, element* item);
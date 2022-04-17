#include <stdlib.h>
#include <stdio.h>
typedef struct _element{
    int key;
    char value;
}element;
typedef element* stack;
#define top(stack)  (top_stack)
#define sz(stack)   (sz_stack)             //size
#define createStack(stack, maxStackSize)  element stack[maxStackSize];
                                          int top_stack = -1;
                                          int sz_stack = maxStackSize;
#define isStackEmpty(stack)     ( top_stack < 0)
#define isStackFull(stack)      ( top_stack >= sz_stack - 1)
#define pushStack(stack, item)      if( isStackFull(stack) ){
                                        printf("stack full\n");
                                        exit(-1);
                                    }else{
                                        stack[++top_stack] = item;
                                    }
#define popStack(stack, item)       if( isStackEmpty(stack)){
                                         printf("Stack empty\n");
                                         exit(-1);
                                         }else{
                                             item = stack[sz_stack--];
                                }

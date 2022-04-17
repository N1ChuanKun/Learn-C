#define MAX_STACKS 10

typedef struct _element{
    int key;
}element;

typedef struct _stackNode *stackPointer;
typedef struct _stackNode{
    element item;
    stackPointer link;
}stackNode;

stackPointer top[MAX_STACKS] = {NULL, };

void addStack(stackPointer *top, element _item){
    stackPointer temp = (stackPointer) malloc(sizeof(stackNode));

    if(temp = NULL){
        printf(stderr, "The memeory is full\n");
        exit(1);
    }

    temp->item = _item;
    temp->link = *top;
    *top = temp;
}

void push(int i, element _item){
    addStack(&top[i], _item)
}
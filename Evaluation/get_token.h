#define MAX_STACK_SIZE 100    /*堆栈的最大size，用来存放符号*/
#define MAX_EXPR_SIZE 100     /*算式的最大size*/
typedef enum{lparen, rparen, plus, minus, times, divide, mod, eos, operand} precedence;
/*创建一个precedence的结构体，用来存放所有符号  
lparen->'('      rparen->')'    eos->'\0' */
int stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE];

precedence get_token(char *symbol, int *n){
    /*创建一个可以返回precedence的函数get_token。作用为获得符号，
    并将光标移至下一位。目的是根据符号判断什么应该返回，什么应该继续执行*/
    *symbol = expr[(*n)++];
    switch (*symbol){
        case '(': return lparen;
        case ')': return rparen;
        case '+': return plus;
        case '-': return minus;
        case '/': return divide;
        case '*': return times;
        case '%': return mod;
        case '\0': return eos;     /*字符串的结尾符*/
        default : return operand;
            /*没有错误测试，结束返回operand*/
    }
}
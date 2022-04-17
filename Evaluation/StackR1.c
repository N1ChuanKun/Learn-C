#include "get_token.h"

int eval(void){
    precedence token;                  /*创建一个类型是precedence,叫token的结构体*/
    char symbol;
    int n = 0;
    int op1, op2, top = -1;            /*因为用到了堆栈，堆栈top赋值-1，正常操作*/
    token = get_token(&token, &n);     /*呼出函数，返回符号*/
    while (token != eos){              /*没读到结束符eos之前反复执行*/
        if (token == operand)          /*如果token的值等于operand*/
            add(&top, symbol - '0');   /* '0' - '0' = 0; '2' - '0' = 2;
                                        用这个方法让数据转型为int，同时让值存入堆栈 */
        else{
            op2 = delete(&top);        
            op1 = delete(&top);        /*如果token读到符号，将最顶上的两个值取出，注意op2在op1之前
                                         需要符合堆栈的先进后出原则，之后根据所检查到的符号创造相应算式
                                         并将算式存入此时的top中，也就是top[0]*/
            switch(token){
                case plus: add(&top, op1+op2); break;
                case minus: add(&top, op1-op2); break;
                case times: add(&top, op1*op2); break;
                case divide: add(&top, op1/op2); break;
                case mod: add(&top, op1%op2);
            }
        }
        token = get_token(&symbol, &n); /*结束前检查下一个字符*/
    }
    return delete(&top);                /*算式储存在现在的top中，所以返回top指向的值*/
}
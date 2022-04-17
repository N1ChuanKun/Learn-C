#include "get_token.h"

precedence stack[MAX_STACK_SIZE];
static int isp [] = {0, 19, 12, 12, 13, 13, 13, 0};
static int icp [] = {20, 19, 12, 12, 13, 13, 13, 0};
/*更具要入栈还是出栈，分别设置isp和icp，并根据运算符的优先级创建两个数列*/
void postfix(void){
    char symbol;
    precedence token;
    int n = 0;
    int top = 0; /*为什么初始值不是-1，因为要将eos存入第一位（下一句）*/
    stack[0] = eos;
    for(token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n)){
                                                    /*检测token是不是eos，如果不是的话继续get_token*/

        if(token == operand)                        /*是数字就直接输出*/
            printf("%c", symbol);

        else if(token == rparen){                   /*如果token检测到左括号，知道token检测到右括号为止
                                                      从最顶部开始，删除并输出所有左括号之前，堆栈中的所有运算符*/
            while(stack[top] != lparen)
                print_token(delete(&top));
            delete(&top);                           /*删除左括号*/
        }else{
            while(isp[stack[top]] >= icp[token])    /*如果现在isp优先级大于icp的话，输出top的运算符。
                                                      并即将token加入*/
                print_token(delete(&top));
            add(&top, token);
        }
    }
    while((token = delete(&top)) != eos)           /*top的值赋予token，且不为结束符时。输出最后一个运算符*/
        print_token(token);
    printf("\n");
}
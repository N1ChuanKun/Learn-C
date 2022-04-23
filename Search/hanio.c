#include <stdio.h>

/* f(n) 为将n个盘子挪动到另一个柱子上所需的步骤数
   1. 将 n-1 个盘子从 A 挪到 B -> 需要f(n - 1)步
   2. 将 n 个盘子从 A 挪到 C   -> 需要 1 步
   3. 将 n-1 个盘子从 B 挪到 C  -> 需要f(n-1)步 
   总计 2f(n-1) + 1步（利用递归实现）           */

int Hanio_pow(int num)
{
    if(1 == num)
        return 1;
    else
        return 2*Hanio_pow(num-1)+1;
}

/* 如果 num = 1 那么输出A
   否则有两种情况：
   1. n-1个盘子，从 A 挪动到 C 再到 B
   2. n-1个盘子，从 B 挪动到 A 再到 C    */

void Hanio_step(int num, char A, char B, char C)
{
    int i;

    if(num == 1)
        printf("%c -> %c\n", A, C);
    else{
        Hanio_step(num - 1, A, C, B);
        printf("%c -> %c\n", A, C);
        Hanio_step(num - 1, B, A, C);
    }
}

int main()
{
    int num = 0;
    printf("Input number of Hanio: ");
    scanf("%d", &num);
    int step = Hanio_pow(num);
    printf("%d Hanio, need %d step.\n", num, step);

    Hanio_step(num, 'A', 'B', 'C');

    return 0;
}
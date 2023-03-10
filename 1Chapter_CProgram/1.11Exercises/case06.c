#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("这是一个加法计算器，欢迎您使用\n");
    printf("--------------------------------------\n");
    printf("请输入第一个数（输入完毕后按回车键）\n");
    scanf("%d", &a);
    printf("请输入第二个数（输入完毕后按回车键）\n");
    scanf("%d", &b);
    c=a+b;
    printf("它们的和是%d", c);
}
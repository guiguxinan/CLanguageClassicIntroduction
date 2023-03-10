#include<iostream>
using namespace std;
/*
函数的声明与定义
函数声明（函数原型）的目的：告诉编译器函数的名字是什么，返回值类型是什么，参数是什么
函数定义（函数实现）：告诉编译器函数要实现的功能是什么
*/
int add(int x, int y); // 函数声明：参数名可不写如：int add(int, int),声明是为了告诉编译器一些基本函数信息
int main()
{
    int a = 4, b = 4;
    cout<<add(a, b);
}
int add(int x, int y)   //函数定义
{
    return x+y; //  要实现的目的
}

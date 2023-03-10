#include<iostream>
using namespace std;
/*
函数的声明与定义02
*/
void A();   // 声明函数A
void B();   // 声明函数B
// 两个函数不做声明并相互调用时
void A()
{
    cout<<"函数A\n";
    B();
}
void B()
{
    cout<<"函数B\n";
    A();
}

int main()
{
    A();
    B();
    return 0;
}
/*
直接运行代码会报错：
declarationAndDefinition02.cpp: In function 'void A()':
declarationAndDefinition02.cpp:10:5: error: 'B' was not declared in this scope
     B();

声明函数后运行代码：
（两个函数相互调用）所以会无限循环打印输出语句
函数A
函数B
函数A
函数B
函数A
函数B
...
*/

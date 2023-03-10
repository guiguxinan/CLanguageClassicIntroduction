#include<iostream>
using namespace std;
int main()
{
    // 整型变量的定义和使用
    // 整型定义
    int a = -1;
    // 无符号整型定义
    unsigned b = -1;
    // 短整型定义
    short c = -3;
    // 长整型定义
    long d = -4;
    // 无符号长整型
    unsigned long e = a+b+c+d;
    
    cout<<"a:"<<a<<"\n"
        <<"b:"<<b<<"\n" // 由于b声明的是无符号类型，所以结果输出为二进制表现形式
        <<"c:"<<c<<"\n"
        <<"d:"<<d<<"\n"
        <<"e:"<<e;
    return 0;
}
/*
打印结果：
a:-1
b:4294967295
c:-3
d:-4
e:4294967287
*/
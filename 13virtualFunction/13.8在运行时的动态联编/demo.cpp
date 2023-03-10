#include <iostream>
#include <string>
using namespace std;
/*
File    :   demo.cpp
Time    :   2023/02/23 20:00:19
Author  :   Guiguxinan 
Version :   1.0
Desc    :   在编译时的动态联编
*/

class A{
    public:
        virtual void print(){cout<<"A编译时的动态联编\n";}  // 添加为virtual
};

class B:public A{
    public:
        void print(){cout<<"B编译时的动态联编\n";}
};

int main()
{
   /*从13.6节对静态联编的实例中可以知道,编译程序在编译阶段并不能确切知道将要调用
的函数,只有在程序执行时才能确定将要调用的函数,要确切知道该调用的函数,要求联编工
作要在程序运行时进行,这种在程序运行时进行的联编工作被称为动态联编,或称动态束定,
又叫晚期联编。假如我们在虚函数中没有采用指针或者引用,那么就无法实现动态联编。
*/
    A a;
    B b;
    A * p = &b;
    a.print();
    p->print();
    /*
    A编译时的动态联编
    B编译时的动态联编
    */
    return 0;
}

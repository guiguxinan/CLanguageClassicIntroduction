#include <iostream>
#include <string>
using namespace std;
/*
File    :   demo.cpp
Time    :   2023/02/23 19:12:38
Author  :   Guiguxinan 
Version :   1.0
Desc    :   静态联编
*/

class F{
    public:
        F(){i = 1;}
        void print(){cout<<"F编译时的静态联编\n";}
        int getI(){return i;}
    private:
        int i;
};

class S:public F{
    public:
        void print(){cout<<"S编译时的静态联编\n";}
        int getI(){return i;}
    private:
        int i;
};

class C{
    public:
        void print(){cout<<"C编译时的动态联编\n";}
};

class D:public C{
    public:
        void print(){cout<<"D编译时的动态联编\n";}
};

class Q{
    public:
        void print(){cout<<"Q运行时的动态联编\n";}
};

class W:public Q{
    public:
        void print(){cout<<"W运行时的动态联编\n";}
};


int main()
{
    cout<<"13.6 编译时的静态联编\n";
    S s;
    F f;
    s.print();
    f.print();
    /*
    S编译时的静态联编
    F编译时的静态联编
    按照调用顺序执行对象成员函数
    */

    cout<<"13.8 编译时的动态联编\n";

    cout<<"13.9 运行时的动态联编\n";
    return 0;
}

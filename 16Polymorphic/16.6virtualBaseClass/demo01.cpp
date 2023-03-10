#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/03/07 11:08:21
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/
class A{
    public:
        int func(){return 0;}
};
class B:virtual public A{
    public:
        int func1(){return 1;}
};
class C:virtual public A{
    public:
        int func2(){return 2;}
};
class D:public B,public C{
    public:
        int func3(){return 3;}
};
int main()
{
    D d;
    cout<<d.A::func()<<endl;    //error: 'A' is an ambiguous base of 'D'
    cout<<d.func1()<<endl;
    cout<<d.func2()<<endl;
    cout<<d.func3()<<endl;
    return 0;
}
